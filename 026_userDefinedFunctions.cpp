#include <iostream>


void happyBirthday(std::string name, int age); // allows us to use this function within the main
// despite it being declared afterwards

int main(){

    std::string name = "Matty";
    int age = 26;

    happyBirthday(name, age); // envoke the function - call it within main
    happyBirthday(name, age);
    return 0;
}

// standard to declare extra functions after main
void happyBirthday(std::string name, int age){ // have to have the std::string bit
    std::cout << "HB2 " << name << ", you are " << age << "\n";
    std::cout << "HB2 " << name << ", you are " << age << "\n";
    std::cout << "HB2 " << name << ", you are " << age << "\n\n";
}