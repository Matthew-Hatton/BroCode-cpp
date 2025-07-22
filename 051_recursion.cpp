#include <iostream>

// when you call a function you add a 'frame' to the 'stack'

// recursion = a programming technique where a function
//              invokes itself from within
//              break a complex concept into a repeatable single steps
//
//              (iterative vs recursive)
//
// advantages = less code and is cleaner
//              useful for sorting and searching algorithms
//
// disadvantages = uses more memory
//                  slower

void walk_iterative(int steps);
void walk_recursive(int steps);

int main(){
    //walk_iterative(100);
    walk_recursive(100);
    return 0;
}

void walk_iterative(int steps){
    for (int i = 0; i < steps; i++)
    {
        std::cout << "You take a step iteratively\n";
    }
    
}

void walk_recursive(int steps){
    if(steps > 0){
        std::cout << "You take a step recursively\n";
        walk_recursive(steps - 1);
    }
}