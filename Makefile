objects = main.o levenshtein.o wstring_test.o sougoulog.o

edit : $(objects) 
	g++ -o edit $(objects) 
main.o : levenshtein.h wstring_test.h
	g++ -c main.cpp
levenshtein.o : levenshtein.h
	g++ -c levenshtein.cpp
wstring_test.o : wstring_test.h
	g++ -c wstring_test.cpp
sougoulog.o : sougoulog.h
	g++ -c sougoulog.cpp
.PHONY : clean 
clean : 
	rm *.exe *.o
