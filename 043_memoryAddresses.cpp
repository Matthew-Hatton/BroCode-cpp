#include <iostream>
// memory address = a location in memory where data is stored
// a memory address can be accessed with & (address-of operator)

int main(){
    std::string name = "Matty";
    int age = 23;
    bool student = true;

    std::cout << &name << std::endl; // hexadecimal address
    std::cout << &age << std::endl;
    std::cout << &student << std::endl;
    return 0;
}