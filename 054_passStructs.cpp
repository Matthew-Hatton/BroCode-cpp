#include <iostream>

// passing by value is expensive as it creates a copy
// passing by reference (e.g. &car) works on the original

struct Car
{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);
void paintCar(Car &car,std::string color);
int main(){
    
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2025;
    car1.color = "Blue";

    car2.model = "Corsa";
    car2.year = 2007;
    car2.color = "Black";

    paintCar(car1,"Silver");
    paintCar(car2,"Gold"); // if we didn't use &car it wouldn't change as we change a copy

    std::cout << &car1 << '\n';
    printCar(car1); // passed by value, not by reference. creates a copy
    printCar(car2);
    return 0;
}

// &car to work with original
void printCar(Car &car){ // Car struct is the datatype we are passing in
    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}
void paintCar(Car &car,std::string color){
    car.color = color;
}