#include <klocale.h>
/****************************************************************************
** Form implementation generated from reading ui file './kstreamripperbase.ui'
**
** Created: Tue Oct 7 09:53:39 2003
**      by: The User Interface Compiler ($Id: kstreamripperbase.cpp,v 1.1 2003/10/07 08:47:20 tuxipuxi Exp $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "kstreamripperbase.h"

#include <qvariant.h>
#include <qbuttongroup.h>
#include <qcheckbox.h>
#include <qgroupbox.h>
#include <qheader.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qlistview.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/* 
 *  Constructs a KStreamRipperBase as a child of 'parent', with the 
 *  name 'name' and widget flags set to 'f'.
 */
KStreamRipperBase::KStreamRipperBase( QWidget* parent, const char* name, WFlags fl )
    : QWidget( parent, name, fl )
{
    if ( !name )
	setName( "KStreamRipperBase" );
    KStreamRipperBaseLayout = new QGridLayout( this, 1, 1, 11, 6, "KStreamRipperBaseLayout"); 

    m_settingsGroup = new QGroupBox( this, "m_settingsGroup" );
    m_settingsGroup->setColumnLayout(0, Qt::Vertical );
    m_settingsGroup->layout()->setSpacing( 6 );
    m_settingsGroup->layout()->setMargin( 11 );
    m_settingsGroupLayout = new QGridLayout( m_settingsGroup->layout() );
    m_settingsGroupLayout->setAlignment( Qt::AlignTop );

    m_pathLabel = new QLabel( m_settingsGroup, "m_pathLabel" );

    m_settingsGroupLayout->addWidget( m_pathLabel, 0, 0 );

    m_timeToRip = new QLabel( m_settingsGroup, "m_timeToRip" );

    m_settingsGroupLayout->addWidget( m_timeToRip, 1, 0 );

    m_id3Label = new QLabel( m_settingsGroup, "m_id3Label" );

    m_settingsGroupLayout->addWidget( m_id3Label, 0, 3 );

    m_id3Checkbox = new QCheckBox( m_settingsGroup, "m_id3Checkbox" );
    m_id3Checkbox->setChecked( TRUE );

    m_settingsGroupLayout->addWidget( m_id3Checkbox, 0, 4 );

    m_tuneInLabel = new QLabel( m_settingsGroup, "m_tuneInLabel" );

    m_settingsGroupLayout->addWidget( m_tuneInLabel, 2, 0 );

    m_secondsLabel = new QLabel( m_settingsGroup, "m_secondsLabel" );

    m_settingsGroupLayout->addWidget( m_secondsLabel, 1, 2 );

    m_browseButton = new QPushButton( m_settingsGroup, "m_browseButton" );

    m_settingsGroupLayout->addWidget( m_browseButton, 0, 2 );

    m_tuneInEdit = new QLineEdit( m_settingsGroup, "m_tuneInEdit" );

    m_settingsGroupLayout->addWidget( m_tuneInEdit, 2, 1 );

    m_timeEdit = new QLineEdit( m_settingsGroup, "m_timeEdit" );

    m_settingsGroupLayout->addWidget( m_timeEdit, 1, 1 );

    m_destEdit = new QLineEdit( m_settingsGroup, "m_destEdit" );

    m_settingsGroupLayout->addWidget( m_destEdit, 0, 1 );

    KStreamRipperBaseLayout->addWidget( m_settingsGroup, 0, 0 );

    m_favoriteLabel = new QLabel( this, "m_favoriteLabel" );

    KStreamRipperBaseLayout->addWidget( m_favoriteLabel, 1, 0 );

    layout4 = new QGridLayout( 0, 1, 1, 0, 6, "layout4"); 

    layout8 = new QVBoxLayout( 0, 0, 6, "layout8"); 

    m_streamsGroup = new QButtonGroup( this, "m_streamsGroup" );
    m_streamsGroup->setColumnLayout(0, Qt::Vertical );
    m_streamsGroup->layout()->setSpacing( 6 );
    m_streamsGroup->layout()->setMargin( 11 );
    m_streamsGroupLayout = new QVBoxLayout( m_streamsGroup->layout() );
    m_streamsGroupLayout->setAlignment( Qt::AlignTop );

    m_addStreamButton = new QPushButton( m_streamsGroup, "m_addStreamButton" );
    m_streamsGroupLayout->addWidget( m_addStreamButton );

    m_deleteStreamButton = new QPushButton( m_streamsGroup, "m_deleteStreamButton" );
    m_streamsGroupLayout->addWidget( m_deleteStreamButton );

    m_tuneInButton = new QPushButton( m_streamsGroup, "m_tuneInButton" );
    m_streamsGroupLayout->addWidget( m_tuneInButton );
    layout8->addWidget( m_streamsGroup );

    m_ripGroup = new QButtonGroup( this, "m_ripGroup" );
    m_ripGroup->setColumnLayout(0, Qt::Vertical );
    m_ripGroup->layout()->setSpacing( 6 );
    m_ripGroup->layout()->setMargin( 11 );
    m_ripGroupLayout = new QVBoxLayout( m_ripGroup->layout() );
    m_ripGroupLayout->setAlignment( Qt::AlignTop );

    m_ripButton = new QPushButton( m_ripGroup, "m_ripButton" );
    m_ripGroupLayout->addWidget( m_ripButton );

    m_stopRipButton = new QPushButton( m_ripGroup, "m_stopRipButton" );
    m_stopRipButton->setEnabled( FALSE );
    m_stopRipButton->setOn( FALSE );
    m_ripGroupLayout->addWidget( m_stopRipButton );
    layout8->addWidget( m_ripGroup );

    layout4->addLayout( layout8, 0, 1 );

    layout7 = new QGridLayout( 0, 1, 1, 0, 6, "layout7"); 

    m_currentLabel = new QLabel( this, "m_currentLabel" );

    layout7->addWidget( m_currentLabel, 0, 0 );

    m_bytesReadEdit = new QLineEdit( this, "m_bytesReadEdit" );
    m_bytesReadEdit->setEnabled( TRUE );
    m_bytesReadEdit->setReadOnly( TRUE );

    layout7->addWidget( m_bytesReadEdit, 1, 1 );

    m_bytesReadLabel = new QLabel( this, "m_bytesReadLabel" );
    m_bytesReadLabel->setFrameShape( QLabel::NoFrame );
    m_bytesReadLabel->setFrameShadow( QLabel::Plain );

    layout7->addWidget( m_bytesReadLabel, 1, 0 );

    m_currentEdit = new QLineEdit( this, "m_currentEdit" );
    m_currentEdit->setEnabled( TRUE );
    m_currentEdit->setReadOnly( TRUE );

    layout7->addWidget( m_currentEdit, 0, 1 );

    layout4->addLayout( layout7, 1, 0 );

    m_streamsListView = new QListView( this, "m_streamsListView" );

    layout4->addWidget( m_streamsListView, 0, 0 );

    KStreamRipperBaseLayout->addLayout( layout4, 2, 0 );

    layout10 = new QHBoxLayout( 0, 0, 6, "layout10"); 

    m_aboutButton = new QPushButton( this, "m_aboutButton" );
    layout10->addWidget( m_aboutButton );

    m_quitButton = new QPushButton( this, "m_quitButton" );
    layout10->addWidget( m_quitButton );

    KStreamRipperBaseLayout->addLayout( layout10, 4, 0 );
    QSpacerItem* spacer = new QSpacerItem( 31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    KStreamRipperBaseLayout->addItem( spacer, 3, 0 );
    languageChange();
    resize( QSize(546, 592).expandedTo(minimumSizeHint()) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
KStreamRipperBase::~KStreamRipperBase()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void KStreamRipperBase::languageChange()
{
    setCaption( tr2i18n( "KStreamRipper V. 0.1" ) );
    m_settingsGroup->setTitle( tr2i18n( "Settings" ) );
    m_pathLabel->setText( tr2i18n( "Destination:" ) );
    m_timeToRip->setText( tr2i18n( "Time to Rip:" ) );
    m_id3Label->setText( tr2i18n( "Add ID3 Tag:" ) );
    m_id3Checkbox->setText( QString::null );
    m_tuneInLabel->setText( tr2i18n( "Tune in Command:" ) );
    m_secondsLabel->setText( tr2i18n( "seconds" ) );
    m_browseButton->setText( tr2i18n( "...." ) );
    m_tuneInEdit->setText( tr2i18n( "xmms <url>" ) );
    m_timeEdit->setText( tr2i18n( "0" ) );
    m_destEdit->setText( tr2i18n( "/home/" ) );
    m_favoriteLabel->setText( tr2i18n( "Your Radio Streams:" ) );
    m_streamsGroup->setTitle( tr2i18n( "Stream Options" ) );
    m_addStreamButton->setText( tr2i18n( "&Add Stream" ) );
    m_deleteStreamButton->setText( tr2i18n( "&Delete Stream" ) );
    m_tuneInButton->setText( tr2i18n( "&Tune in" ) );
    m_ripGroup->setTitle( tr2i18n( "Rip Stream" ) );
    m_ripButton->setText( tr2i18n( "&Rip Stream" ) );
    m_stopRipButton->setText( tr2i18n( "&Stop Rip" ) );
    m_currentLabel->setText( tr2i18n( "Currently Ripping:" ) );
    m_bytesReadLabel->setText( tr2i18n( "Bytes Read:" ) );
    m_aboutButton->setText( tr2i18n( "About" ) );
    m_quitButton->setText( tr2i18n( "&Quit" ) );
}

#include "kstreamripperbase.moc"
