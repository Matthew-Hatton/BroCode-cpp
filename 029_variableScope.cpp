#include <iostream>
// local variables = declared inside a function or block {}
// global variables = declared outside of all functions

int myNum = 3; // global variable - best to avoid, pollutes global namespace

void printNum();

int main(){
    int myNum = 1; // functions use local BEFORE global
    printNum();
    std::cout << myNum << "\n";
    //if you would prefer to use global, you can pre-seed
    std::cout << ::myNum; //uses global version
    return 0;
}

void printNum(){
    int myNum = 2; // two versions of same variable are fine within the same scope
    std::cout << myNum << "\n"; // functions can't see inside other functions
}