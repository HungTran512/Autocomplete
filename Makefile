all : Term_test BinarySearchDeluxe_test Autocomplete_test

Autocomplete_test : Autocomplete_test.o Autocomplete.o Term.o
	g++ -std=c++0x -o Autocomplete_test Autocomplete_test.o Autocomplete.o Term.o

Autocomplete_test.o : Autocomplete_test.cpp Autocomplete.h Term.h BinarySearchDeluxe.h
	g++ -std=c++0x -c Autocomplete_test.cpp

Autocomplete.o : Autocomplete.cpp Autocomplete.h BinarySearchDeluxe.h Term.h
	g++ -std=c++0x -c Autocomplete.cpp

BinarySearchDeluxe_test : BinarySearchDeluxe_test.o Term.o
	g++ -std=c++0x -o BinarySearchDeluxe_test BinarySearchDeluxe_test.o Term.o

BinarySearchDeluxe_test.o : BinarySearchDeluxe_test.cpp BinarySearchDeluxe.h Term.h
	g++ -std=c++0x -c BinarySearchDeluxe_test.cpp

Term_test : Term_test.o Term.o
	g++ -std=c++0x -o Term_test Term_test.o Term.o

Term_test.o : Term_test.cpp Term.h
	g++ -std=c++0x -c Term_test.cpp

Term.o : Term.cpp Term.h
	g++ -std=c++0x -c Term.cpp

clean :
	rm *.o Term_test BinarySearchDeluxe_test Autocomplete_test
