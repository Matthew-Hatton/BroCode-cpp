#include <iostream>

/*
constructor = special method that is automatically called when an
                object is instantiated
                useful for assigning values to attributes as arguements
                i.e. instead of doing car1.make = "Ford", we can do that automatically

*/

class Student{
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string name, int age, double gpa){ // this is a constructor
        
        // if the attribute names are different from the parameter names, we don't need the this keyword
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

    Car(std::string make,std::string model, int year, std::string color){
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};

int main(){

    Student student1("Matty",26,4.0);
    Student student2("Jasmine",32,4.2);

    std::cout << student1.name << "\n";
    std::cout << student1.age << "\n";
    std::cout << student1.gpa << "\n";

    std::cout << student2.name << "\n";
    std::cout << student2.age << "\n";
    std::cout << student2.gpa << "\n";

    Car car1("Ford","Mustang",2022,"Blue");

    std::cout << car1.make << '\n';
    return 0;
}