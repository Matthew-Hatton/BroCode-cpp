#include <iostream>
// switch = alternative to using many "else if" statements
//          compare one value against matching cases


int main(){

    int month;
    std::cout << "Enter a month or letter:";
    std::cin >> month;

    switch(month){ // basically a case_when statement
        case 1:
            std::cout << month << " It is January";
            break;
        case 2:
            std::cout << "It is February";
            break;
        default: // kind of like the else statement
            std::cout << "Default case";
            break;
    }
    return 0;
}