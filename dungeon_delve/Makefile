a.out: main.o tree.o
	g++ main.o tree.o
main.o: main.cpp
	g++ -c main.cpp
tree.o:
	g++ -c tree.cpp
clean:
	rm -f a.out *.o core
