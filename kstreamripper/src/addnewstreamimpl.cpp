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


#include <kmessagebox.h>

#include <qpushbutton.h>
#include <qlineedit.h>

#include "addnewstreamimpl.h"




AddNewStreamImpl::AddNewStreamImpl( QWidget* parent, const char* name )
: AddNewStream( parent,name, true  )
{

connect( d_okButton, SIGNAL( clicked()), this, SLOT( okButtonClicked()) );
connect( d_cancelButton, SIGNAL( clicked()), this, SLOT( cancelButtonClicked()) );

}



AddNewStreamImpl::~AddNewStreamImpl()
{
}


//SLOTS


void	AddNewStreamImpl::okButtonClicked() {

if( d_nameEdit->text() != "" && d_urlEdit->text() != "" && d_descEdit->text() != "" ) {

	emit	finished( this );
  this->close();
  }

else {

	KMessageBox::error( this,
  										"You forgot to fill out one or more fields, please do it now.",
                      "Missing Information" );
 }

}

void	AddNewStreamImpl::cancelButtonClicked() {

	this->close();

}



