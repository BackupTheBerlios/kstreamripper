# set the include path for X, qt and KDE
INCLUDES = $(all_includes)

# these are the headers for your project


# let automoc handle all of the meta source files (moc)
METASOURCES = AUTO

messages: rc.cpp
	$(XGETTEXT) *.cpp -o $(podir)/kstreamripper.pot

KDE_ICON = kstreamripper

#########################################################################
# APPLICATION SECTION
#########################################################################
# this is the program that gets installed.  it's name is used for all
# of the other Makefile.am variables
bin_PROGRAMS = kstreamripper

# the application source, library search path, and link libraries

kstreamripper_LDFLAGS = $(KDE_RPATH) $(all_libraries)
kstreamripper_LDADD = -lkio $(LIB_KDEUI)

# this is where the desktop file will go 
shelldesktopdir = $(kde_appsdir)/Utilities
shelldesktop_DATA = kstreamripper.desktop

# this is where the shell's XML-GUI resource file goes
shellrcdir = $(kde_datadir)/kstreamripper
shellrc_DATA = kstreamripperui.rc

kstreamripper_SOURCES =  addnewstreamimpl.cpp addnewstreamimpl.h addnewstream.ui ff.h kstreamripperbase.ui kstreamripper.cpp kstreamripper.h main.cpp
