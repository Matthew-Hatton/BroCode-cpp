#include <iostream>
#include <cmath>

int main(){
    double x = 3.14;
    double y = 4;
    double z;

    //z = std::max(x,y);
    //z = pow(2,3);
    //z = sqrt(9);
    //z = abs(-4);
    //z = round(x);
    //z = ceil(x); // round up
    z = floor(x); // round down

    std::cout << z;
    return 0;
}

/*
for a list of more c++ related Mathematics functions, visit
cplusplus.com/reference/cmath/
*/