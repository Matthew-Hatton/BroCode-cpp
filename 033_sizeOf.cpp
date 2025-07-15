#include <iostream>

// sizeof() = determines the size in bytes of a:
//              variable, data type, class, objects, etc.

int main(){
    double gpa = 7.4;
    std::cout << sizeof(gpa) << " Bytes" << "\n";

    std::string name = "Matty"; // string just holds an address
    std::cout << sizeof(name) << " Bytes \n"; // doesn't matter the size of string
    
    std::cout << sizeof(char) << " Bytes\n";
    std::cout << sizeof(int) << " Bytes\n";
    std::cout << sizeof(bool) << " Bytes\n";

    char grades[] = {'A','B','C','D'}; // 4 one byte elements = 4 byte array
    std::cout << sizeof(grades) << " Bytes\n";

    // check how many elements are in an array
    std:: cout << sizeof(grades)/sizeof(grades[0]) << " Elements\n";
    
    std::string students[] = {"spongebob","patrick","squidward"};
    std::cout << sizeof(students)/sizeof(students[0]) << " Elements\n";

    return 0;
}