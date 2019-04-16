/**
*	@file Test.h
*	@author Taylor Bauer
*	@date April 15, 2019
*	@brief A header file for Test Suite class
*/

#ifndef TEST_H
#define TEST_H
#include <string>
#include "LinkedListOfInts.h"

class Test {
    public:
    Test();
    void runTests();

    private:
    int testCount;
    std::string testToString(bool result);

    LinkedListOfInts simpleList();

    bool sizeOfEmpty();
    bool oneAddFront();
    bool oneAddBack();
    bool oneRemoveFront();
    bool oneRemoveBack();
    bool sizeSimpleList();
    bool tooManyRemoveFronts();
    bool tooManyRemoveBacks();
    bool emptyAfterRemoveFronts();
    bool emptyAfterRemoveBacks();
    bool nonEmpty();
    bool searchReturnsTrue();
    bool searchReturnsFalse();
    bool searchWithMultiples();
    bool emptyListSearch();
    bool emptyRemoveFront();
    bool emptyRemoveBack();
    bool addFrontVerify();
    bool addBackVerify();
    bool removeFrontVerify();
    bool removeBackVerify();

};

#endif