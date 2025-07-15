#include <iostream>
// foreach loop = loop that eases the traversal
//                  over an iterable data set
//                  less flexibility. Starts at starts and goes to end
//                  can't skip elements

int main(){
    std::string students[] = {"Matty","Jasmine","Jemima"};
    for(std::string i : students){ // for each
        std::cout << i << '\n';
    }
    
    int grades[] = {65,72,44,26};
    for(int grade : grades){
        std::cout << grade << '\n';
    }
    return 0;
}