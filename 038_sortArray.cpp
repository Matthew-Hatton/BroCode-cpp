#include <iostream>
// bubble sort
// start at element 1, if element on right is larger, 
//move element 1 to temp, move element 2 to element 1,
// then move temp into 2, then repeat

void sort(int array[], int size);

int main(){
    int array[] = {10,2,6,5,3,9}; // declare array
    int size = sizeof(array)/sizeof(array[0]); // find size

    sort(array,size);

    for (int element : array)
    {
        std::cout << element << " ";
    } // print
    
    return 0;
}

void sort(int array[], int size){
    int temp; // declare temp
    // will need to iterate of array (size) times
    for(int i = 0; i < size - 1; i++){ //-1 due to we don't need to compare last element against anything
        for(int j = 0; j < size - i -1; j++){
            if(array[j] > array[j + 1]){ // descending would be <
                temp = array[j];
                array[j] = array[j+1];
                array[j + 1] = temp; // swap the elements
            }
        }
    
    }
}