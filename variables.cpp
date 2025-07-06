#include <iostream>

int main(){
    int x = 5; //declaration and assignment
    int y = 6; // int - integer only whole numbers
    int sum = x + y;

    int z = 7.5;
    std::cout << z << std::endl; // truncates 7.5 into 7 as integer

    // double (number including decimal)
    double price = 10.99;

    std::cout << price << std::endl;

    // single character
    char grade = 'A'; // single quotations important here
    char initial = 'B'; // can't store more than one character here

    std::cout << initial << std::endl;

    // boolean (T/F)
    bool student = true;
    bool light = false;


    return 0;
}
