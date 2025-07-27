#include <iostream>
/*
object = A collection of attributes and methods
            They can have characteristics and could perform actions
            Can be used to mimic real world items (e.g. Phone, Book, dog etc.)
            Created from a class which acts as a blueprint
            In the example of a dog, a dogs characteristics would be it's breed, it's color, etc.
            It's actions would be it barking, it running, it playing fetch etc.
            method = function which belongs to a class. A method it can perform
            */

class Human{
    public: // public access modifier (later learned)
        std::string name; // characteristics - can set default attributes by doing = "Example"
        std::string occupation;
        int age;

        // method is a function that belongs to a class. Something a function can do
        void eat(){
            std::cout << "This person is eating\n";
        }
        void drink(){
            std::cout << "This person is drinking\n";
        }
        void sleep(){
            std::cout << "This person is sleeping\n";
        }
};

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        void accelerate(){
            std::cout <<"You step on the gas\n"; 
        }
        void brake(){
            std::cout <<"You step on the brakes\n";
        }
};

int main(){

    Human human1; // is an object, has a name, occupation, and age
    Human human2;
    
    Car car1;
    
    human1.name = "Rick";
    human1.occupation = "Cop";
    human1.age = 30;

    human2.name = "Shane";
    human2.occupation = "Cop";
    human2.age = 32;

    std::cout << human1.name << '\n';
    std::cout << human2.name << '\n';

    // invoke methods
    human1.eat();
    human1.drink();
    human1.sleep();

    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2025;
    car1.color = "Blue";

    std::cout << car1.make << std::endl;

    car1.accelerate();
    car1.brake();

    return 0;
}