#include <klocale.h>
/****************************************************************************
** Form implementation generated from reading ui file '/home/tuxipuxi/Documents/cpp/kde/kstreamripper/src/addnewstream.ui'
**
** Created: Mon Oct 6 00:42:21 2003
**      by: The User Interface Compiler ($Id: addnewstream.cpp,v 1.1 2003/10/07 08:47:20 tuxipuxi Exp $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "addnewstream.h"

#include <qvariant.h>
#include <qframe.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/* 
 *  Constructs a AddNewStream as a child of 'parent', with the 
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
AddNewStream::AddNewStream( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )

{
    if ( !name )
	setName( "AddNewStream" );
    setFocusPolicy( QDialog::TabFocus );

    frame3 = new QFrame( this, "frame3" );
    frame3->setGeometry( QRect( 20, 10, 350, 211 ) );
    frame3->setFrameShape( QFrame::StyledPanel );
    frame3->setFrameShadow( QFrame::Raised );

    d_urlLabel = new QLabel( frame3, "d_urlLabel" );
    d_urlLabel->setGeometry( QRect( 10, 80, 100, 31 ) );

    d_nameLabel = new QLabel( frame3, "d_nameLabel" );
    d_nameLabel->setGeometry( QRect( 10, 30, 90, 21 ) );

    d_descriptionLabel = new QLabel( frame3, "d_descriptionLabel" );
    d_descriptionLabel->setGeometry( QRect( 10, 140, 80, 30 ) );

    d_nameEdit = new QLineEdit( frame3, "d_nameEdit" );
    d_nameEdit->setGeometry( QRect( 130, 30, 191, 21 ) );

    d_urlEdit = new QLineEdit( frame3, "d_urlEdit" );
    d_urlEdit->setGeometry( QRect( 131, 90, 190, 21 ) );

    d_descEdit = new QLineEdit( frame3, "d_descEdit" );
    d_descEdit->setGeometry( QRect( 130, 140, 190, 21 ) );

    d_okButton = new QPushButton( this, "d_okButton" );
    d_okButton->setGeometry( QRect( 40, 240, 150, 31 ) );
    d_okButton->setFocusPolicy( QPushButton::TabFocus );

    d_cancelButton = new QPushButton( this, "d_cancelButton" );
    d_cancelButton->setGeometry( QRect( 220, 240, 141, 31 ) );
    languageChange();
    resize( QSize(391, 289).expandedTo(minimumSizeHint()) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
AddNewStream::~AddNewStream()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void AddNewStream::languageChange()
{
    setCaption( tr2i18n( "Add Stream...." ) );
    d_urlLabel->setText( tr2i18n( "Url of Stream:" ) );
    d_nameLabel->setText( tr2i18n( "Name:" ) );
    d_descriptionLabel->setText( tr2i18n( "Description:" ) );
    d_okButton->setText( tr2i18n( "&Ok" ) );
    d_cancelButton->setText( tr2i18n( "&Cancel" ) );
}

#include "addnewstream.moc"
