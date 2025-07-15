#include <iostream>
// array = a data structure that can hold multiple values
//          values are accesed by an index number
//          "kind of like a variable that holds multiple values"


int main(){
    std::string car[] = {"corevette", "mustang", "camry"};

    std::cout << car << "\n"; // will display a memory address of where our array is located

    std::cout << car[0] << "\n";  // to access value you have to use index
    std::cout << car[1] << "\n";

    car[0] = "camaro";
    std::cout << car[0] << "\n";
    // elements of an array must all have the same datatype

    std::string cars[0]; // can also assign values later on - just remember to input a size
    cars[0] = "camaro";
    cars[1] = "mustang";
    cars[2] = "corvette";
    int numElements = 3;
    for (int i = numElements - 1; i >= 0; i--){
        std::cout << cars[i] << "\n";
    }

    double prices[] = {5.00,7.50,9.99,15.00};
    numElements = sizeof(prices)/sizeof(prices[0]); // get number of elements in an array
    for (int i = 0; i <= numElements-1; i++){
        std::cout << prices[i] << "\n";
    }

    return 0;
}