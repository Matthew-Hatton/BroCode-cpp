#include <iostream>
 // Luhn algorithm to determine if a credit card number is valid
int getDigit(const int number);
int sumOdd(const std::string cardNumber);
int sumEven(const std::string cardNumber);

 int main(){
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card number: \n";
    std::getline(std::cin, cardNumber);
    result = sumEven(cardNumber) + sumOdd(cardNumber);

    if(result % 10 == 0){
        std::cout << cardNumber << " is valid.";
    } else{
        std::cout << cardNumber << " is NOT valid.";
    }
    return 0;
}

int getDigit(const int number){
    return number % 10 + (number / 10 % 10);
}
int sumOdd(const std::string cardNumber){
    int sum = 0;
    for (int i = cardNumber.size() - 1; i >= 0; i-=2) // every even digit
    {
        sum += getDigit((cardNumber[i] - '0')); // due to ascii table?
    }
    return 0;
}
int sumEven(const std::string cardNumber){
    int sum = 0;
    for (int i = cardNumber.size() - 2; i >= 0; i-=2) // every even digit
    {
        sum += getDigit((cardNumber[i] - '0')* 2); // due to ascii table?
    }
    
    return 0;
}