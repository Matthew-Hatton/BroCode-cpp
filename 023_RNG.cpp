#include <iostream>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;

// pseudo-random = not truly random (but close)
int main(){
    //srand(time(NULL)); // common practice to use system time as seed -  seed the random number generator, which affects the sequence of random numbers that rand() produces.
    int num = rand();
    cout << num;
    
    return 0;
}