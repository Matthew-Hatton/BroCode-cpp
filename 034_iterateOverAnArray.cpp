#include <iostream>

int main(){
    std::string students[] = {"Matty","Jasmine","Jemima"};

    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        std::cout << students[i] << "\n";
    }

    char grades[] = {'a','b','c','d','f'};
    for (int i = 0; i < sizeof(grades)/sizeof(grades[0]); i++)
    {
        std::cout << grades[i] << "\n";
    }
    
    return 0;
}