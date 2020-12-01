#makefile AdoteAnimais

all:	animal.o tratador.o veterinario.o main.o
	g++ -o main animal.o tratador.o veterinario.o main.o

animal.o:	animal.cpp animal.hpp
	g++ -c animal.cpp

tratador.o: tratador.cpp tratador.hpp
	g++ -c tratador.cpp

veterinario.o: veterinario.cpp veterinario.hpp
	g++ -c veterinario.cpp

main.o: main.cpp animal.hpp
	g++ -c main.cpp

clean:
	rm -rf *.o

vai:
	./main
