CC = g++

main: main.o
	$(CC) -o main.o `wx-config --libs`
	
main.o: main.cpp 
	$(CC) `wx-config --cxxflags` -c main.cpp -o main.o
	
clean:
	rm -r *.o main
	