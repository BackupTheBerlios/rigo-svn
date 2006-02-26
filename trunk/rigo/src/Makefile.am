# these are the headers for your project
noinst_HEADERS = note.h topic.h source.h notebook.h toolbox.h rigo.h

#########################################################################
# APPLICATION SECTION
#########################################################################
# this is the program that gets installed.  it's name is used for all
# of the other Makefile.am variables
bin_PROGRAMS = rigo

# the application source, library search path, and link libraries
rigo_SOURCES = note.cpp topic.cpp source.cpp notebook.cpp toolbox.cpp \
	classTesters.cpp rigo.cpp
rigo_LDFLAGS = $(WX_LIBS) 

