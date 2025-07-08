#include <iostream>
#include <cmath>


// calculate hypotenuse
int main(){

    double length_1;
    double length_2;
    double hypot;

    std::cout << "What is the first length?: ";
    std::cin >> length_1;

    std::cout << "What is second length?: ";
    std::cin >> length_2;

    hypot = sqrt(pow(length_1,2) + pow(length_2,2));

    std::cout << "The hypotenuse is: " << hypot;
    return 0;
}