#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator) - character input

int main(){

    int age;
    std::string name;

    std::cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, name); // allows for spaces >> std::ws eliminates white spaces or new line char

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old.\n";


    return 0;
}