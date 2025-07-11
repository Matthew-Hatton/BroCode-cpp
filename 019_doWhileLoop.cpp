#include <iostream>

// do while loop = do some block of code first,
//                  THEN repeat again if condition is true

int main(){

    int number;
    // This is all very cumbersome
    /*
    std::cout << "Enter a +ve: ";
    std::cin >> number;
    // we haven't assigned the number yet, so it won't work
    while (number < 0 )
    {
        std::cout << "Enter a +ve: ";
        std::cin >> number;
    }
    std::cout << "The # is: " << number;
    */
    // better to 'do while'
    do{
        std::cout << "Enter a number: ";
        std::cin >> number;
    }while(number < 0);
    return 0;
}