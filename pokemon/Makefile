a.out: main.o pokemon.o move.o
	g++ main.o pokemon.o move.o
main.o: main.cpp
	g++ -c main.cpp
pokemon.o: pokemon.cpp
	g++ -c pokemon.cpp
move.o: move.cpp
	g++ -c move.cpp
clean:
	rm -f a.out *.o core
