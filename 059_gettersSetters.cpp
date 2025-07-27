#include <iostream>

// Abstraction = hiding unnecessary data from outside a class
// getter = function that makes a private attribute READABLE
// setter = function that makes a private attribute WRITEABLE

class Stove{
    public: // since this is public, it is accessible outside the class. Means people can chagne it
        int temperature = 0;
    private:
        int temperature2 = 0;
    public:
        int getTemperature(){ //getter - makes attribute readable
            return temperature2;
        } // allows us to read the temperature from a private access modifier within a class
        void setTemperature(int temperature2){
            if(temperature < 0){
                this->temperature2 = 0;
            } else if(temperature >= 10){
                this->temperature2 = 10;
            } else{
                this->temperature2 = temperature2;
            }
            
        }
};

int main(){

    Stove stove;
    stove.temperature = 1000000;
    //stove.temperature2 = 10; // won't work as it is private

    stove.setTemperature(10000); // user can then set for private access modifier

    std::cout << stove.getTemperature();

    return 0;
}