#include <iostream>
// fill() = Fills a range of elements with a specified value
//          fill(begin,end,value)
//          end is the array name + the number of elements to fill

int main(){
    // not practical
    std::string foods[10] = {"pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza"};
    

    const int SIZE = 100;
    std::string foods2[SIZE];
    fill(foods2, foods2 + SIZE/2, "pizza"); //fills first half of array
    fill(foods2 + SIZE/2,foods2 + SIZE,"Hamburger");

    for(std::string food : foods2){
        std::cout << food << "\n";
    }
    
    return 0;
}