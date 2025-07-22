#include <iostream>

// function template = describes what a function looks like.
//                      can be used ti generate as many overloaded functions
//                      as needed, each using different data types.
//                      avoids multiple functions doing the same thing
/*
int max(int x, int y){
    return (x > y) ? x : y;
}

double max(double x, double y){
    return (x > y) ? x : y;
} 
*/
// lots of work to create different functions which do the same, just for different data types

//template <typename T> // only setup for arguments of the same datatype
template <typename T, typename U> // now recieves 2 different datatypes
auto max(T x, U y){ // compiler deduces what return type should be
    return (x > y) ? x : y;
}


int main(){
    std::cout << max(1,2.1) << '\n';
    return 0;
}