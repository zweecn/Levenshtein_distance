objects = main.o levenshtein.o 

edit : $(objects) 
	g++ -o edit $(objects) 
main.o : levenshtein.h
	g++ -c main.cpp
levenshtein.o: levenshtein.h
	g++ -c levenshtein.cpp
.PHONY : clean 
clean : 
	rm *.exe *.o
