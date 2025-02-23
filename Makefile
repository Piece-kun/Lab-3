all: main.o matrix.o
	g++ main.o matrix.o -o programm

main.o: main.cpp
	g++ -c main.cpp

marix.o:
	g++ -c marix.cpp

clean:	
	rm -rf *.o