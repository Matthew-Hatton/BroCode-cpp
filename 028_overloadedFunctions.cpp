#include <iostream>
// you can have different versions of the same function
//function name plus its parameters is called a 'function signature' and is unique
void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1,std::string topping2);

int main(){
    bakePizza();
    bakePizza("cheese");
    bakePizza("Cheese","Tomato");
    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza!\n";
}
void bakePizza(std::string topping1){
    std::cout << "Here is your " << topping1 << " pizza!\n";
}
void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}