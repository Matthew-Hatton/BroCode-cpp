#include <iostream>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;

// pseudo-random = not truly random (but close)
int main(){
    srand(time(NULL)); // common practice to use system time as seed -  seed the random number generator, which affects the sequence of random numbers that rand() produces.
    int num1 = (rand() % 6) + 1; // for six sided dice - goes from 0-5, so add 1
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    
    return 0;
}