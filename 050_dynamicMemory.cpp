#include <iostream>

// dynamic memory = Memory that is allocated after the program
//                  is already compiled and running.
//                  Use the 'new' operator to allocate
//                  memory in the heap rather than the stack

//                  useful when we don't know how much memory
//                  we will need. Makes our programs more flexible
//                  especially when accepting user input.

int main(){
    int  *pNum = nullptr;
    pNum = new int; // use up enough space in the heap for 1 integer
    
    *pNum = 21;
    std::cout << "Address: " << pNum << '\n';
    std::cout << "Value: " << *pNum << '\n';

    delete pNum; // free up the memory at this address

    char *pGrades = nullptr;
    int size;
    std::cout << "How many grades to enter in? ";
    std::cin >> size;
    pGrades = new char[size]; // dynamically enters, mid program
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter grade #" << i+1 << ": ";
        std::cin >> pGrades[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        std::cout << pGrades[i] << " ";
    }
    delete[] pGrades; // delete after to avoid memory leak
    
    
    return 0;
}