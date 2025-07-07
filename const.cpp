#include <iostream>

int main(){
    /*
    The const keyword specifies that a variables
    value is constant
    tells the compiler to prevent anything from modifying it
    (read-only)
    */

    const double PI = 3.14159; // upper case letters imply constant
    const int LIGHT_SPEED = 299792458;

    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";
    return 0;
}

/*
I'm sure I could already improve Mike's code a little bit by using
constants for variables which don't change.
*/