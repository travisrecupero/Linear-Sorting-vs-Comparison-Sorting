all: link

link: compile main.o quick.o
	g++ main.o quick.o -o final

compile: main.cpp Quicksort.cpp
	g++ -c main.cpp -o main.o
	g++ -c Quicksort.cpp -o quick.o 

clean:
	rm -f *.o final
