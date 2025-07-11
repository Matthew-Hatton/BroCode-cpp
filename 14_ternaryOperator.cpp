#include <iostream>
// ternary operator (?:) = replacement to an if/else statement
// condition ? expression1 : expression2;

int main(){

    //int grade = 50;
    //grade >= 60 ? std::cout << "You Pass" : std::cout << "You fail";

    bool hungry = true; // don't need to say == true here
    //hungry ? std::cout << "Get me food" : std::cout << "Full up";
    std::cout << (hungry ? "You are hungry" : "Full up"); // does the same
    return 0;
}