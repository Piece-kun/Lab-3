   CC = g++
   CFLAGS = -Wall
# Проверка наличия компилятора
   ifeq (, $(shell which $(CC)))
       $(error "Compiler $(CC) not found! Please install it.")
   endif


all: main.o matrix.o
	$(CC) main.o matrix.o -o ../usr/bin/matrix $(CFLAGS)

main.o: main.cpp
	$(CC) -c main.cpp $(CFLAGS)

marix.o:
	$(CC) -c marix.cpp $(CFLAGS)

clean:	
	rm -rf *.o