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


 #include <kapplication.h>
 #include <kaboutdata.h>
 #include <kcmdlineargs.h>

 #include "kstreamripper.h"



 int main( int argc, char *argv[] )
 {


		KAboutData			aboutApp( "KStreamRipper", I18N_NOOP( "KStreamRipper" ), "0.1",
                              "KStreamRipper is a Frontend to Streamripper. Visit Homepage for more Info.",
                              KAboutData::License_GPL, "(C) 2003 Michael Goettsche", 0, "http://www.tuxipuxi.de/kstreamripper/",
                              "mail@tuxipuxi.de" );

                    aboutApp.addAuthor( "Michael Goettsche", 0, "mail@tuxipuxi.de" );

                    aboutApp.addCredit( "Kevin Krammer",
                                        "For his great help on ICQ and mrunix.de");

    KCmdLineArgs::init( argc, argv, &aboutApp );

    KApplication		app;


    KStreamRipper 	*mainWidget		=		new KStreamRipper();

    app.setMainWidget( mainWidget );
    mainWidget->show();

    mainWidget->resize( 700, 600 );

    return					app.exec();

 }















