/****************************************************************************
** Form interface generated from reading ui file './kstreamripperbase.ui'
**
** Created: Tue Oct 7 09:53:29 2003
**      by: The User Interface Compiler ($Id: kstreamripperbase.h,v 1.1 2003/10/07 08:47:19 tuxipuxi Exp $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef KSTREAMRIPPERBASE_H
#define KSTREAMRIPPERBASE_H

#include <qvariant.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QButtonGroup;
class QCheckBox;
class QGroupBox;
class QLabel;
class QLineEdit;
class QListView;
class QListViewItem;
class QPushButton;

class KStreamRipperBase : public QWidget
{
    Q_OBJECT

public:
    KStreamRipperBase( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~KStreamRipperBase();

    QGroupBox* m_settingsGroup;
    QLabel* m_pathLabel;
    QLabel* m_timeToRip;
    QLabel* m_id3Label;
    QCheckBox* m_id3Checkbox;
    QLabel* m_tuneInLabel;
    QLabel* m_secondsLabel;
    QPushButton* m_browseButton;
    QLineEdit* m_tuneInEdit;
    QLineEdit* m_timeEdit;
    QLineEdit* m_destEdit;
    QLabel* m_favoriteLabel;
    QButtonGroup* m_streamsGroup;
    QPushButton* m_addStreamButton;
    QPushButton* m_deleteStreamButton;
    QPushButton* m_tuneInButton;
    QButtonGroup* m_ripGroup;
    QPushButton* m_ripButton;
    QPushButton* m_stopRipButton;
    QLabel* m_currentLabel;
    QLineEdit* m_bytesReadEdit;
    QLabel* m_bytesReadLabel;
    QLineEdit* m_currentEdit;
    QListView* m_streamsListView;
    QPushButton* m_aboutButton;
    QPushButton* m_quitButton;

protected:
    QGridLayout* KStreamRipperBaseLayout;
    QGridLayout* m_settingsGroupLayout;
    QGridLayout* layout4;
    QVBoxLayout* layout8;
    QVBoxLayout* m_streamsGroupLayout;
    QVBoxLayout* m_ripGroupLayout;
    QGridLayout* layout7;
    QHBoxLayout* layout10;

protected slots:
    virtual void languageChange();
};

#endif // KSTREAMRIPPERBASE_H
