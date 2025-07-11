// arithmetic operators = return the result of a specific arithmetic operation ( + - * /)

#include <iostream>

int main(){

    int students = 20;
    //students = students + 1;
    //students+=1;
    students++; // 2 lines above also do the exact same things
    std::cout << students << std::endl;

    int student_minus = 10;
    student_minus--; // only subtracts 1
    std::cout << student_minus << std::endl;

    int student_mult = 5;
    student_mult*=2;
    std::cout << student_mult << std::endl;

    double student_div = 3;
    student_div/=2;
    std::cout << student_div << std::endl;

    return 0;
}