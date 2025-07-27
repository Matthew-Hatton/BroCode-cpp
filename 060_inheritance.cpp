#include <iostream>

// inheritance = A class can recieve attributes and methods from another class
//                  Children classes inherit from a Parent class
//                  Helps to reuse similar code found within multiple classes

class Animal{
    public:
        bool alive = true;
    void eat(){
        std::cout << "This animal is eating\n";
    }
};

class Dog : public Animal{
    public:
    
    void bark(){
        std::cout << "WOOF\n";
    }
};

class Cat : public Animal{ // cat is a child of animal
    public:

    void meow(){
        std::cout << "MEOW\n";
    }
};

int main(){

    Dog dog;
    Cat cat;

    std::cout << dog.alive << std::endl;
    dog.eat();
    dog.bark();

    cat.eat();
    return 0;
}