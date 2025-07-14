#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int num;
    int guess;
    int tries;

    tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "**** NUMBER GUESSING GAME ****" << endl;

    do
    {
        cout << "Enter a guess between 1 and 100\n";
        cin >> guess;
        tries++;

        if (guess > num)
        {
            cout << "Too high!" << endl;
        }
        else if (guess < num)
        {
            cout << "Too low!" << endl;
        }
        else{
            cout << "CORRECT!\n# of tries: " << tries << "\n";
        }
        
        
    } while (guess != num);
    cout << "*****************************************";
    return 0;
}