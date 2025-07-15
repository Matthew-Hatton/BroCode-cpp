#include <iostream>

double getTotal(double prices[],int size);

int main(){
    double prices[] = {49.99,15.05,75,9.99};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices,size); // don't need to pass []

    std::cout << "$" << total;
    return 0;
}

double getTotal(double prices[], int size) { // passing an array in decays to a list of pointers, meaning we can't just do a for each loop here
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += prices[i];
    }
    return total;
}

//when a function is passed an array, it decays to a pointer