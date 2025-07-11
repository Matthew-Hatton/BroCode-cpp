#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
/*
Namespace = provides a solution for preventing name conflicts
            in large projects. Each entity needs a unique name.
            A namespace allows for identically named entities
            as long as the namespaces are different.

*/

    int x = 0;
    // int x = 1; This would cause an error because we have defined x twice
    // if you don't specify what namespace you are using,
    // you will default to the local version

    std::cout << "From Local: " << x << "\n From First: " << first::x << "\n From Second: " << second::x << std::endl;
     // the first:: is called pre-seeding something

     using namespace first;
     std::cout << "and using namespace first, x = " << x;
    // Can also be used for using namespace std;
    // but it's not recommended. Just means you don't have to type
    // std:: at the start of every cout etc.

    return 0;
}