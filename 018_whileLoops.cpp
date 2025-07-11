#include <iostream>

int main(){

    std::string name;

    while(name.empty()){ // same as in R
        std::cout <<  "Enter your name: ";
        std::getline(std::cin, name);
    }
    std::cout << "Hello " << name << std::endl;
    
    return 0;
}
