#include <iostream>
#include <cmath>
// return = return a value back to the spot where you called the
//          ecompassing function

double square(double length); // function declaration
double cube(double length);
std::string concatStrings(std::string str1,std::string str2);

int main(){
    double length = 6.0;
    double area = square(length);
    double volume = cube(length);
    std::string firstName = "Matty";
    std::string lastName = "Hatton";
    std::string fullName = concatStrings(firstName,lastName);

    std::cout << area << std::endl;
    std::cout << volume << std::endl;
    std::cout << fullName << std::endl;
    return 0;
}

double square(double length){
    return pow(length,2);
}

double cube(double length){
    return pow(length,3);
}

std::string concatStrings(std::string str1,std::string str2){
    return str1 + " " + str2; // adding two strings together mashes them together

}