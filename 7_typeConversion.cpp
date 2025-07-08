#include <iostream>

// type conversion = convert a value of one data type to another
// implicit = automatic
// explicit = precede value with new data type (int)

int main(){
    double x = (int) 3.14;
    std::cout << x << "\n";


    char y = 100;
    std::cout << y << std::endl;


    int correct = 8;
    int questions = 10;

    // score as percentage
    //double score = correct/questions * 100; // this will just be integer division
    double score = correct/(double)questions * 100;
    std::cout << score << "%";

    return 0;
}