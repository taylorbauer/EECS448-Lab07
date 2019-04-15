#include <iostream>
#include <string>
#include "LinkedListOfInts.h"
#include "Test.h"

Test::Test() {

    testCount = 0;

}

void Test::runTests() {

    std::cout << "runTests() called...\n";
    std::cout << "Test " << testCount << ": size of empty list is zero: " << testToString(sizeOfEmpty());
    std::cout << "Test " << testCount << ": size returns correct value after 1 addFront: " << testToString(oneAddFront());
    std::cout << "Test " << testCount << ": size returns correct value after 1 addBack: " << testToString(oneAddBack());
    std::cout << "Test " << testCount << ": size returns correct value after 1 removeFront: " << testToString(oneRemoveFront());
    std::cout << "Test " << testCount << ": size returns correct value after 1 removeBack: " << testToString(oneRemoveBack());
    std::cout << "Test " << testCount << ": size returns correct after generating simple list of size 100: " << testToString(sizeSimpleList());
    std::cout << "Test " << testCount << ": size returns 0 after too many removeFronts: " << testToString(tooManyRemoveFronts());
    std::cout << "Test " << testCount << ": size returns 0 after too many removeBacks: " << testToString(tooManyRemoveBacks());
    std::cout << "Test " << testCount << ": list is empty after too many removeFronts: " << testToString(emptyAfterRemoveFronts());
    std::cout << "Test " << testCount << ": list is empty after too many removeBacks: " << testToString(emptyAfterRemoveBacks());
    std::cout << "Test " << testCount << ": non-empty lists are not empty: " << testToString(nonEmpty());
    std::cout << "Test " << testCount << ": search returns true when it should on a populated list: " << testToString(searchReturnsTrue());
    std::cout << "Test " << testCount << ": search returns false when it should on a populated list: " << testToString(searchReturnsFalse());
    std::cout << "Test " << testCount << ": search returns true when there are multiple of the searched-for value: " << testToString(searchWithMultiples());
    std::cout << "Test " << testCount << ": search returns false on an empty list: " << testToString(emptyListSearch());
    std::cout << "Test " << testCount << ": removeFront() returns false on an empty list: " << testToString(emptyRemoveFront());
    std::cout << "Test " << testCount << ": removeBack() returns false on an empty list: " << testToString(emptyRemoveBack());
    return;
}

std::string Test::testToString(bool result) {
    testCount ++;
    if (result) 
    {
        return ("PASSED\n");
    }
    else
    {
        return ("FAILED\n");
    }
    
}

LinkedListOfInts Test::simpleList() {
    LinkedListOfInts list;
    for (int i = 0; i < 100; i++) {
        list.addBack(i);
    }
    return list;
}

bool Test::sizeOfEmpty() {
    LinkedListOfInts empty;
    return (empty.size() == 0);
}

bool Test::oneAddFront() {
    LinkedListOfInts list;
    list.addFront(0);
    return (list.size() == 1);
}

bool Test::oneAddBack() {
    LinkedListOfInts list;
    list.addBack(0);
    return (list.size() == 1);
}

bool Test::oneRemoveFront() {
    LinkedListOfInts list;
    list.addFront(0);
    list.removeFront();
    return (list.size() == 0);
}

bool Test::oneRemoveBack() {
    LinkedListOfInts list;
    list.addFront(0);
    list.removeBack();
    return (list.size() == 0);
}

bool Test::nonEmpty() {
    LinkedListOfInts list;
    return (!(list.isEmpty()));
}

bool Test::sizeSimpleList() {
    LinkedListOfInts list = simpleList();
    return (list.size() == 100);
}

bool Test::tooManyRemoveFronts() {
    LinkedListOfInts list = simpleList();
    for (int i = 0; i < 115; i++) {
        list.removeFront();
    }
    return (list.size() == 0);
}

bool Test::tooManyRemoveBacks() {
    LinkedListOfInts list = simpleList();
    for (int i = 0; i < 115; i++) {
        list.removeBack();
    }
    return (list.size() == 0);
}

bool Test::emptyAfterRemoveFronts() {
    LinkedListOfInts list = simpleList();
    for (int i = 0; i < 115; i++) {
        list.removeFront();
    }
    return (list.isEmpty());
}

bool Test::emptyAfterRemoveBacks() {
    LinkedListOfInts list = simpleList();
    for (int i = 0; i < 115; i++) {
        list.removeBack();
    }
    return (list.isEmpty());
}

bool Test::searchReturnsTrue() {
    LinkedListOfInts list = simpleList();
    return (list.search(40));
}

bool Test::searchReturnsFalse() {
    LinkedListOfInts list = simpleList();
    return (list.search(-40));
}

bool Test::searchWithMultiples() {
    LinkedListOfInts list;
    list.addFront(1);
    list.addFront(1);
    list.addFront(1);
    return (list.search(1));
}

bool Test::emptyListSearch() {
    LinkedListOfInts list;
    return (list.search(40));
}

bool Test::emptyRemoveFront() {
    LinkedListOfInts list;
    return (list.removeFront());
}

bool Test::emptyRemoveBack() {
    LinkedListOfInts list;
    return (list.removeBack());
}