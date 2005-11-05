 #-----Macros---------------------------------

BASEDIR = ./


 # set up compiler and options
CXX = g++
CXXFLAGS = -O -g -Wall -ggdb
GTKFLAGS = -O -Wall `pkg-config --cflags --libs libglade-2.0` -rdynamic -ggdb

OBJS = classes.o main.o

rigo: ${OBJS}
	${CXX} -o rigo ${GTKFLAGS} ${OBJS} 
	
classes.o: classes.cpp
	${CXX} ${CFLAGS} -c classes.cpp

main.o: main.cpp
	${CXX} ${GTKFLAGS} -c main.cpp

clean:
	rm -f *.o core classes rigo 
 
