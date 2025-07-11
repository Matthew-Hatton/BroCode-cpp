#include <iostream>

int main(){
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin >> std::ws, name);

    if(name.length() > 12){
        std::cout << name << " is a long name" << std::endl;
    } else if(name.length() > 0){
        std::cout << name << " is a short name" << std::endl;
    } else if(name.empty()){ // returns boolean value
        std::cout << "Enter valid name.";
    }

    //name.clear() clears name.

    //int x = 5;
    //x.clear(); // doesn't work for integers.
    //std::cout << x;
    // only strings

    name.append("@gmail.com");
    std::cout << "Your email address is " << name << std::endl;

    std::cout << name.at(0) << std::endl; // pulls that number character from string
    // starts indexing at 0

    name.insert(0,"@"); //inserts character at position
    std::cout << name << std::endl;

    std::cout << name.find('T') << std::endl; // tells you first position of found character
    // if the value isn't found, 18446744073709551615 is returned (equates to -1).

    name.erase(0,3); // erases characters 0 to 3
    std::cout << name << std::endl;
    return 0;
}