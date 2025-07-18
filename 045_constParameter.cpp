#include <iostream>

// const parameter = parameter that is effectively read-only
//                      code is more secure and conveys intent
//                      useful for references and pointers

void printInfo(const std::string &name, const int &age);

int main(){
    std::string name = "Matty";
    int age = 26;

    printInfo(name, age);
    return 0;
}

void printInfo(const std::string &name, const int &age){
    //name = " ";
    //age = 0; // these wouldn't work
    std::cout << name << '\n';
    std::cout << age << '\n';
}