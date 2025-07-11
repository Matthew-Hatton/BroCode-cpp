#include <iostream>

int main(){
    double temp;
    char unit;

    std::cout << "Input your temperautre: ";
    std::cin >> temp;
    std::cout << "Enter unit (C or F): ";
    std::cin >> unit;

    if(unit == 'C' || 'c')
    {
        std::cout << temp * (9/5) + 32 << "F";
    }else if(unit == 'F' || 'f')
    {
        std::cout << (temp - 32) / (9/5) << "C";
    }
    return 0;
}