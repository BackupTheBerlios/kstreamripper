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

#ifndef KSTREAMRIPPER_H
#define KSTREAMRIPPER_H


#include "kstreamripperbase.h"


class AddNewStreamImpl;
class QProcess;
class QString;
class KLed;

class KStreamRipper : public KStreamRipperBase
{
  Q_OBJECT

public:
  KStreamRipper( QWidget* parent = 0, const char* name = 0 );
  ~KStreamRipper();

  virtual	void	closeEvent( QCloseEvent* );


protected slots:

	void		browseButtonClicked();

  void		addStreamButtonClicked();
  void		deleteStreamButtonClicked();
  void		tuneInButtonClicked();

  void		ripButtonClicked();
  void		stopRipButtonClicked();

  void		addStreamFinished( AddNewStreamImpl* );

  void		readStdout();
  void		setEmptyText();

  void		quitButtonClicked();
  void		aboutButtonClicked();
  

protected:

  QProcess	*streamProc;
  bool			ripping;
  QString		output;
  KLed			*m_ripLed;




};

#endif

