#include <iostream>
#include <iomanip> // accuracy of floating point numbers

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance = 0;
    int choice = 0;
    const double pin = 1234;
    double attempt;
    int attempts = 3;

    do
    {
        std::cout << "Enter your pin: ";
        std::cin >> attempt;
        if (attempt == pin)
        {
            std::cout << "Welcome to your account.\n";
            break;
        } else{
            attempts--;
            switch (attempts)
            {
            case 2: std::cout << "Try again: X00\n";
                    break;
            case 1: std::cout << "Try again: XX0\n";
                    break;
            case 0: std::cout << "PIN Incorrect. Locking Services. Goodbye.";
                    break;
            default:
                break;
        }
        }
    } while (attempts != 0);
    
    if (attempt == pin)
    {
    do
    {
    std::cout << "*********************\n";
    std::cout << "Enter your choice:\n";
    std::cout << "*********************\n";
    std::cout << "1. Show Balance\n";
    std::cout << "2. Deposit Money\n";
    std::cout << "3. Withdraw Money\n";
    std::cout << "4. Exit\n";
    std::cin >> choice;

    std::cin.clear(); // resets error flags when std input fails
    fflush(stdin); // clears new line character

    switch (choice)
    {
    case 1: showBalance(balance);
            break;
    case 2: balance += deposit();
            std::cout << "Your balance is now: $" << balance << std::endl;
            break;
    case 3: balance-= withdraw(balance);
            break;
    case 4: std::cout << "Thanks for visiting\n";
            break;
    default: std::cout << "Invalid choice\n";
        break;
    }
    } while (choice != 4);
    }
    else if(attempts != 0){
        std::cout << "Try again.\n";
        attempts--;
    }
    return 0;
}

void showBalance(double balance){
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed<< balance <<std::endl; 
}

double deposit(){
    double amount;
    std::cout << "Enter deposit amount ($): ";
    std::cin >> amount;
    if (amount > 0)
    {
        return amount;
    } else{
        std::cout << "That's Cheeky...\n";
        return 0;
    }
}

double withdraw(double balance){
    double amount; // variable names can be reused inside functions!!!
    std::cout << "Enter withdrawl amount ($): ";
    std::cin >> amount;
    if (amount <= balance && amount > 0)
    {
        return amount;
    } else{
        std::cout << "\nInsufficient funds...\n";
        return 0;
    }
}