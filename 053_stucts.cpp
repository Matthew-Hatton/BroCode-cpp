#include <iostream>

/*
struct = A structure that group related variables under one name
        structs can contain many different data types (string, int, double, bool, etc.)
        variables in a struct are known as "members"
        arrays store multiple values of the same data type, structs store multiple values of different data types
        members can be accesed with . ("Class Member Access Operator")

*/

struct student
{ // all variables declared in here are called "members"
    std::string name;
    double gpa;
    bool enrolled = true; // default setting, therefore if not stated, it will default to this
};

int main(){

    student student1; // has it's own name, gpa, and enrolled status
    student1.name = "Matty";
    student1.gpa = 3.2;
    student1.enrolled = true;

    student student2; 
    student2.name = "Jasmine";
    student2.gpa = 3.3;
    student2.enrolled = false;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';
    std::cout << sizeof(student1) << '\n';
    return 0;
}