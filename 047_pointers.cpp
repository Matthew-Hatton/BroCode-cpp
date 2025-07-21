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

    std::cout << "1. " << pName << '\n'; // contains address of variable 8 bytes
    std::cout << "2. " << *pName << '\n'; // contains value at that address 32 bytes

    std::cout << "3. " << pAge << '\n';
    std::cout << "4. " << *pAge << '\n';

    std::cout << "5. " << pFreePizzas << '\n';
    std::cout << "6. " << *pFreePizzas << '\n';

    for(std::string pizza : freePizzas)
    {
        std::cout << pizza << '\n';
    }

    for (int i = 0; i < sizeof(freePizzas)/sizeof(freePizzas[0]); i++)
    {
        std::cout << freePizzas[i] << '\n';
    }
    
    return 0;
}