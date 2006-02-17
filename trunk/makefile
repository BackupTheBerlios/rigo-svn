BASEDIR = ./rigo/src/

#set up compiler and options
CXX = g++
CXXFLAGS = -O -g -Wall -ggdb

OBJS = classTester.o topic.o note.o source.o notebook.o 

test: ${OBJS}
	${CXX} -o test.out ${CXXFLAGS} ${OBJS}

classTester.o:
	${CXX} ${CXXFLAGS} ./rigo/src/classTester.cpp

notebook.o:
	${CXX} ${CXXFLAGS} ./rigo/src/notebook.h
	
topic.o:
	${CXX} ${CXXFLAGS} ./rigo/src/topic.h

source.o:
	${CXX} ${CXXFLAGS} ./rigo/src/source.h
	
note.o:
	${CXX} ${CXXFLAGS} ./rigo/src/note.h
	
	
clean:
	rm -f *.o test.out
