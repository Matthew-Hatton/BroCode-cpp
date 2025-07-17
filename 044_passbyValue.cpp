#include <iostream>
// pass by value creates copy
// pass by reference - passing memory addresses

void swap(std::string &x,std::string &y);

int main(){
    std::string x = "Kool-Aid";
    std::string y = "Water";

    swap(x,y);
    std::cout << "X: " << x << std::endl;
    std::cout << "Y: " << y << std::endl;
    return 0;
}

void swap(std::string &x, std::string &y){
    std::string temp; // just passing variable here will create a copy
    temp = x; // passing in an address (by reference) we pass the original
    x = y; // should use pass by reference as often as possible
    y = temp;
}