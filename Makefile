#	Author: John Gibbons
#	Date: 2016.10.26


#Add needed Test.o
prog: main.o Test.o
	g++ -g -Wall -std=c++11 Test.o main.o LinkedListOfInts.o -o prog


main.o: main.cpp Test.h Test.cpp
	g++ -g -Wall -std=c++11 -c main.cpp


#Add needed Test.o recipe and compiler command
Test.o: Test.h Test.cpp
	g++ -g -Wall -std=c++11 -c Test.cpp


#DON'T delete LinkedList.o!
clean:
	rm main.o *.*~ prog
