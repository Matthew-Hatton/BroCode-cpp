#include <iostream>
// && = check if two conditions are true
// || = (or) check if at least one condition is true
// ! = reverses the logical state of its operand

int main(){

    int temp;
    bool sunny = true;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    temp > 0 || temp < 30 ? std::cout << "Temperature is good" : std::cout << "Temp is bad";

    // not sunny
    !sunny ? std::cout << "\n It is sunny" : std::cout << "\nCloudy";
    return 0;
}