/***************************************************************************
 *   Copyright (C) 2003 by Michael Goettsche                               *
 *   mail@tuxipuxi.de                                                      *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#include <kconfig.h>
#include <kglobal.h>
#include <kled.h>
#include <kfiledialog.h>
#include <kaboutapplication.h>

#include <qpushbutton.h>
#include <qlistview.h>
#include <qlineedit.h>
#include <qdir.h>
#include <qstring.h>
#include <qstringlist.h>
#include <qbuttongroup.h>
#include <qcheckbox.h>
#include <qprocess.h>
#include <qtextedit.h>
#include <qframe.h>
#include <qtimer.h>

#include "kstreamripper.h"
#include "addnewstreamimpl.h"



KStreamRipper::KStreamRipper( QWidget* parent, const char* name )
: KStreamRipperBase( parent,name ), ripping( 0 )
{

		m_destEdit->setText( QDir::homeDirPath() );

    m_streamsListView->addColumn( "Name" );
    m_streamsListView->addColumn( "Url"  );
    m_streamsListView->addColumn( "Description" );


    //app config
KConfig				*appConfig		=		KGlobal::config();

		m_destEdit->setText( appConfig->readEntry( "Destination" , "" ) );
    m_timeEdit->setText( appConfig->readEntry( "Riptime", "0" ));
    m_tuneInEdit->setText( appConfig->readEntry( "Command", "xmms <url>" ));

    m_id3Checkbox->setChecked( appConfig->readBoolEntry( "Id3Tag", 1 ));

    //listview entrys

    QStringList		nameList,urlList,descList;

		nameList	=		appConfig->readListEntry( "names" );
    urlList		=		appConfig->readListEntry( "urls"  );
    descList	=		appConfig->readListEntry( "descs" );

    QStringList::iterator		iter1, iter2, iter3;
    iter1	=	nameList.begin();
    iter2 = urlList.begin();
    iter3 = descList.begin();

    for( ; iter1 != nameList.end() && iter2 != urlList.end() && iter3 != descList.end(); ++iter1, ++iter2, ++iter3 ){

    (void)	new	QListViewItem( m_streamsListView, *iter1, *iter2, *iter3 );
    }


    //CONNECTS

    connect( m_browseButton, SIGNAL(clicked()), this, SLOT( browseButtonClicked()) );

    connect( m_addStreamButton, SIGNAL(clicked()), this, SLOT( addStreamButtonClicked()) );
    connect( m_deleteStreamButton, SIGNAL(clicked()), this, SLOT( deleteStreamButtonClicked()) );
    connect( m_tuneInButton, SIGNAL(clicked()), this, SLOT( tuneInButtonClicked()) );

    connect( m_ripButton, SIGNAL(clicked()), this, SLOT( ripButtonClicked()) );
    connect( m_stopRipButton, SIGNAL(clicked()), this, SLOT( stopRipButtonClicked()) );

    connect( m_quitButton, SIGNAL(clicked()), this, SLOT( quitButtonClicked()) );
    connect( m_aboutButton, SIGNAL(clicked()), this, SLOT( aboutButtonClicked()) );
}



KStreamRipper::~KStreamRipper()
{

}


void	KStreamRipper::closeEvent( QCloseEvent *e ) {

KConfig			 *appConfig			=		KGlobal::config();

	appConfig->writeEntry( "Destination", m_destEdit->text());
  appConfig->writeEntry( "Riptime", m_timeEdit->text());
  appConfig->writeEntry( "Command", m_tuneInEdit->text());
  appConfig->writeEntry( "Id3Tag", m_id3Checkbox->isChecked());

  //save the listview entrys

  QStringList		nameList,urlList,descList;

  QListViewItemIterator		iter( m_streamsListView );

  while( iter.current() ) {

  	nameList.append( iter.current()->text( 0 ));;
    urlList.append( iter.current()->text( 1 ));
    descList.append( iter.current()->text( 2 ));

    ++iter;
    }

  	appConfig->writeEntry( "names", nameList );
    appConfig->writeEntry( "urls" , urlList  );
    appConfig->writeEntry( "descs", descList );


  appConfig->sync();

e->accept();

}


//SLOTS

void	KStreamRipper::browseButtonClicked() {

			QString		openDest		=			KFileDialog::getExistingDirectory( QDir::homeDirPath(),
      																															 this,
                                                                     "Select Destination...." );

      m_destEdit->setText( openDest );
}

void	KStreamRipper::addStreamButtonClicked() {

			AddNewStreamImpl		*test		=			new AddNewStreamImpl( this );
      connect( test, SIGNAL( finished( AddNewStreamImpl* )), this, SLOT( addStreamFinished( AddNewStreamImpl* )) );

      test->show();

}

void	KStreamRipper::deleteStreamButtonClicked() {

			delete		m_streamsListView->currentItem();
}

void	KStreamRipper::tuneInButtonClicked() {

			if( m_streamsListView->currentItem() ) {

			QString		command			=		m_tuneInEdit->text().replace( "<url>", m_streamsListView->currentItem()->text( 1 ) );

      QStringList		commands=	QStringList::split( " ", command );

      QProcess		*process	=		new QProcess( this );
      process->setArguments( commands );

      process->start();



      }

      else ;
}

void	KStreamRipper::ripButtonClicked() {

			ripping							=			true;

			m_stopRipButton->setEnabled( true );

			QProcess		*proc		=			new QProcess( this );
      streamProc					=			proc;

      proc->addArgument( "streamripper" );
      proc->addArgument( m_streamsListView->currentItem()->text( 1 ));
      proc->addArgument( "-d " );
      proc->addArgument( m_destEdit->text() );
      if( m_timeEdit->text().toInt()  ) {
      proc->addArgument( "-l " );
      proc->addArgument( m_timeEdit->text() );
      }

			connect( proc, SIGNAL( readyReadStdout()), this, SLOT( readStdout()) );

      proc->setCommunication( QProcess::Stdout | QProcess::Stderr | QProcess::DupStderr );
      proc->start();

}

void	KStreamRipper::stopRipButtonClicked() {

			m_stopRipButton->setEnabled( false );
      m_currentEdit->setText( "Stopped Ripping" );
      m_bytesReadEdit->setText( "Stopped Ripping" );
      QTimer::singleShot( 2000, this, SLOT( setEmptyText() ));

			streamProc->tryTerminate();
      QTimer::singleShot( 2500, streamProc, SLOT( kill()) );
}


void	KStreamRipper::addStreamFinished( AddNewStreamImpl *e ) {

			(void)		new	QListViewItem( m_streamsListView, e->d_nameEdit->text(), e->d_urlEdit->text(), e->d_descEdit->text() );


}

void	KStreamRipper::readStdout() {

      QString			tempOutput	=		streamProc->readStdout();
      output.append( tempOutput );
      if( tempOutput.contains( "ripping" )) {

			QString			songname=		tempOutput.mid( tempOutput.find( "]" )+2, tempOutput.find( "[ " ) - tempOutput.find( "] " )-2);
      m_currentEdit->setText( songname );

      QString			bytesR	=		tempOutput.mid( tempOutput.find( "[ ", 2 )+1, tempOutput.find( "]", 15 ) - tempOutput.find( "[ ", 2 )+1);
      bytesR.replace( "[", "" );
      bytesR.replace( "]", "" );
      m_bytesReadEdit->setText( bytesR.stripWhiteSpace() );
      }

      if( tempOutput.contains( "Connecting..." )) {

      m_currentEdit->setText( "Connecting..." );
      m_bytesReadEdit->setText( "Connecting..." );
      }

      if( tempOutput.contains( "buffering" )) {

      m_currentEdit->setText( "Buffering..." );
      m_bytesReadEdit->setText( "Buffering..." );
      }

      if( tempOutput.contains( "Time to stop is here" )) {

      m_currentEdit->setText( "Ripped " + m_timeEdit->text() + " seconds. Stopped ripping" );
      m_bytesReadEdit->setText( "Ripped " + m_timeEdit->text() + " seconds. Stopped ripping" );

      QTimer::singleShot( 2000, this, SLOT( setEmptyText() ));
      }

}

void	KStreamRipper::setEmptyText() {

			m_currentEdit->setText( " " );
      m_bytesReadEdit->setText( " " );
      }

void	KStreamRipper::quitButtonClicked() {

			this->close();

}

void	KStreamRipper::aboutButtonClicked() {

			KAboutApplication		*aboutApp	=		new KAboutApplication();
      aboutApp->show();

}






