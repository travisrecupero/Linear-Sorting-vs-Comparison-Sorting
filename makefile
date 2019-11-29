all: link

link: compile main.o quick.o radix.o
	g++ main.o quick.o radix.o -o final

compile: main.cpp Quicksort.cpp Radix.cpp
	g++ -c main.cpp -o main.o
	g++ -c Quicksort.cpp -o quick.o 
	g++ -c Radix.cpp -o radix.o 

clean:
	rm -f *.o final
