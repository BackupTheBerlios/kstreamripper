/****************************************************************************
** Form interface generated from reading ui file '/home/tuxipuxi/Documents/cpp/kde/kstreamripper/src/addnewstream.ui'
**
** Created: Mon Oct 6 00:42:01 2003
**      by: The User Interface Compiler ($Id: addnewstream.h,v 1.1 2003/10/07 08:47:19 tuxipuxi Exp $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef ADDNEWSTREAM_H
#define ADDNEWSTREAM_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QFrame;
class QLabel;
class QLineEdit;
class QPushButton;

class AddNewStream : public QDialog
{
    Q_OBJECT

public:
    AddNewStream( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~AddNewStream();

    QFrame* frame3;
    QLabel* d_urlLabel;
    QLabel* d_nameLabel;
    QLabel* d_descriptionLabel;
    QLineEdit* d_nameEdit;
    QLineEdit* d_urlEdit;
    QLineEdit* d_descEdit;
    QPushButton* d_okButton;
    QPushButton* d_cancelButton;

protected:

protected slots:
    virtual void languageChange();
};

#endif // ADDNEWSTREAM_H
