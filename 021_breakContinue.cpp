#include <iostream>

// break = break out of a loop (or switch)
// continue = skip current iteration

int main(){

    for(int i = 1; i <= 20; i++){
        if(i == 13){
            continue;
            //break; // breaks out of loop, not if statement
        }
        std::cout << i << std::endl;
    }

    return 0;
}