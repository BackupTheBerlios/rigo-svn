# these are the headers for your project
noinst_HEADERS = rigo.h note.h topic.h source.h notebook.h toolbox.h

#########################################################################
# APPLICATION SECTION
#########################################################################
# this is the program that gets installed.  it's name is used for all
# of the other Makefile.am variables
bin_PROGRAMS = rigo

# the application source, library search path, and link libraries
rigo_SOURCES = rigo.cpp note.cpp topic.cpp source.cpp notebook.cpp toolbox.cpp
rigo_LDFLAGS = $(WX_LIBS) 

