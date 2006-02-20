 #-----Macros---------------------------------

BASEDIR = ./


 # set up compiler and options
CXX = g++
CXXFLAGS = -O -g -Wall -ggdb
GTKFLAGS = -O -Wall -ggdb

OBJS = classes.o main.o

rigo: ${OBJS}
	${CXX} -o rigo.out ${CXXFLAGS} ${OBJS} 
	
classes: classes.cpp
	${CXX} -o classes ${CXXFLAGS} classes.cpp 
	
classes.o: classes.cpp
	${CXX} ${CXXFLAGS} -c classes.cpp

main.o: main.cpp
	${CXX} -c main.cpp

clean:
	rm -f *.o core classes rigo.out 
 
