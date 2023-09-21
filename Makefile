a.out: main.o unsorted.o
	g++ main.o unsorted.o

main.o: main.cpp unsorted.hpp
	g++ -c -std=c++20 main.cpp

unsorted.o: unsorted.cpp
	g++ -c -std=c++20 unsorted.cpp

clean:
	rm -f *.o core a.out