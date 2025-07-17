#include <iostream>
//2d array - array made of arrays
//[rows][columns]. Don't need row size, but do need col size
int main(){
    std::string cars[][3] = {{"mustang","escape","f-150"},
                            {"corvette","equinox","silverado"},
                            {"challenger","durango","ram 1500"}}; // 2D array

    //iterate - nested loops
    int rows = sizeof(cars)/sizeof(cars[0]);
    int cols = sizeof(cars[0])/sizeof(cars[0][0]);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n';
        
    }
    
    return 0;
}