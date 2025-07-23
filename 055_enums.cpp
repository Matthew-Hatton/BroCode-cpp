#include <iostream>
/*
enums = Enumerations. A user-defined data type that consists
        of paired named-integer constants.
        GREAT if you have a set of potential options
*/

enum Day {Monday = 0,Tuesday = 1,Wednesday = 2}; // does this assign manually if not specified

int main(){
    Day today = Wednesday; // normally can't use strings with switches
    switch(today){

        // can also use case 0, case 1,... as they are paired in enum Day
        case Monday: std::cout << "It is Monday!\n";
                        break;
        case Tuesday: std::cout << "It is Tuesday!\n";
                        break;
        case Wednesday: std::cout << "It is Wednesday!\n";
                        break;
    }
    return 0;
}