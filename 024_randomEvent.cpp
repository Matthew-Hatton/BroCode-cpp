#include <iostream>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;

int main(){
    srand(time(0));
    int randNum = (rand() % 5) + 1;
    switch(randNum){
        case 1: cout << "You win a medal!";
                break; // need break or you fall through each case
        case 2: cout << "You win a chocolate bar";
                break;
        case 3: cout << "You win a packet of chewing gum";
                break;
        case 4: cout << "You win a holiday";
                break;
        case 5: cout << "You lose!";
                break;

    }
    return 0;
}