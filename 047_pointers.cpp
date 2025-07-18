#include <iostream>

// pointers = variable that stores a memory address of another variable
//              sometimes it's easier to work with an address

// & address-of operator
// * dereference operator

int main(){
    std::string name = "Matty";
    std::string *pName = &name;

    int age = 26;
    int *pAge = &age;

    std::string freePizzas[5] = {"pizza1","pizza2","pizza3","pizza4","pizza5"};
    std::string *pFreePizzas = freePizzas; // arrays are already an address, so we don't need to use &

    std::cout << pName << '\n'; // contains address of variable 8 bytes
    std::cout << *pName << '\n'; // contains value at that address 32 bytes

    std::cout << pAge << '\n';
    std::cout << *pAge << '\n';
    return 0;
}