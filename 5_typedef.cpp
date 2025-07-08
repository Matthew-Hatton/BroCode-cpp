    // typedef = reserved keyword used to create an additional name
    // (alias) for another data type.
    // New identifier for an existing type
    // helps with readability and reduces typos
    // mostly replace with 'using' keyword

#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;// data type - pair list
// above is very long, we don't want to type it every time

// typedef std::string text_t; // new name for std::string. *_t is naming convention
//typedef int number_t;


// using is more popular now
using text_t = std::string;
using number_t = int;

int main(){
    
    // std::string firstName = "Matty";
    // above is same as
    text_t firstName = "Matty";

    number_t age = 26;

    std::cout << firstName << std::endl;
    std::cout << age;
    return 0;
}