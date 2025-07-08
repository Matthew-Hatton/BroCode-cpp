#include <iostream>

int main(){

    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "Come on in!";
    }
    else if(age < 0){
        std::cout << "???";
    }
    else{
        std::cout << "Get teh fuck!";
    }

    return 0;
}
// very similar to R