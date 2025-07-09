#include <iostream>
// simple calculator program by me.


int main(){
    char op;
    double num1;
    double num2;
    double result;
    std::cout << "Enter an operation (+,-,*,/): ";
    std::cin >> op;
    std::cout << "Enter your first number: ";
    std::cin >> num1;
    std::cout << "Enter your second number: ";
    std::cin >> num2;

    switch (op)
    {
    case '*':
        result = num1 * num2;
        std::cout << num1 << op << num2 << "=" << result;
        break;
    case '+':
        result = num1 + num2;
        std::cout << num1 << op << num2 << "=" << result;
        break;
    case '-':
        result = num1 - num2;
        std::cout << num1 << op << num2 << "=" << result;
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            std::cout << num1 << op << num2 << "=" << result;
        }
        else
        {
            std::cout << "Can't divide by 0!";
        }
        
        break;
    default:
        std::cout << "Enter a valid operation. +,-,*,/";
        break;
    }
    return 0;
}