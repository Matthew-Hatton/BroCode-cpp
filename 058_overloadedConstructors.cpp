#include <iostream>

// overloaded constructors = multiple constructors w/ same name but
//                              different parameters
//                              allows for varying arguements when isntantiating an object

class Pizza{
    public:
        std::string topping1;
        std::string topping2;

    Pizza(){

    }

    Pizza(std::string topping1){
        this->topping1 = topping1;
    }

    Pizza(std::string topping1,std::string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main(){

    Pizza pizza1("cheese");
    Pizza pizza2("mushrooms","peppers");
    Pizza pizza3;

    std::cout << pizza1.topping1 << '\n';
    std::cout << pizza2.topping2 << '\n';

    return 0;
}