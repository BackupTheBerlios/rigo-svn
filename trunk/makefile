BASEDIR = .

#set up compiler and options
CXX = g++
CXXFLAGS = -O -g -Wall -ggdb

OBJS = classtester.o topic.o note.o source.o notebook.o 

test: ${OBJS}
	${CXX} -o test.out ${CXXFLAGS} ${OBJS}

classtester.o:topic.o note.o source.o notebook.o
	${CXX} ${CXXFLAGS}  -c ${BASEDIR}/rigo/src/classtester.cpp

notebook.o: topic.o note.o source.o
	${CXX} ${CXXFLAGS} -c ${BASEDIR}/rigo/src/notebook.h ${BASEDIR}/rigo/src/notebook.cpp
	
topic.o: note.o source.o
	${CXX} ${CXXFLAGS} -c ${BASEDIR}/rigo/src/topic.h ${BASEDIR}/rigo/src/topic.cpp

source.o: note.o
	${CXX} ${CXXFLAGS} -c ${BASEDIR}/rigo/src/source.h ${BASEDIR}/rigo/src/source.cpp
	
note.o:
	${CXX} ${CXXFLAGS} -c ${BASEDIR}/rigo/src/note.h ${BASEDIR}/rigo/src/note.cpp
	
	
clean:
	rm -f *.o test.out ${BASEDIR}/rigo/src/*.o
