#include <iostream>

#include "bigNumCalc.h"

//This is a test file for bigNumCalc
//
//Please exclude this before submitting

//NOTE: Change the mainA -> main; Gradescope only expects main to be submitted

int main() {
        BigNumCalc calc;

    std::list<int> l1 = calc.buildBigNum("9876543210");     //The 2 test number goes here
    std::list<int> l2 = calc.buildBigNum("1234567890");

    std::list<int> result = calc.sub(l1,l2);        //The calculation goes here

    for(std::list<int>::iterator i = result.begin() ; i != result.end() ; i++) {    //printing result
        std::cout << *i << std::endl;
    }

   

    return 0;
}