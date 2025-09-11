/* Arrays In C */
/*
    -An array is a collection of elements of the same type, stored in contiguous memory locations
        # All the elements share the same variable name
        # You can access elements using an index (starting from 0)
*/

#include <stdio.h>

int main() {
    /* Create an Array */
    /*
        -Syntax: datatype arrayName[[size]] = {values...}
        -Size of the array is optional to define (In case of initialization at declaration)
    */

    /* Initilizing */
        // At declaration:
    int numbers[5] = {1, 2, 3, 4, 5};
        // Partial initilazation (remaining become 0):
    int numbers2[5] = {1, 2}; // {1, 2, 0, 0, 0}
        // Without size (auto-sized):
    int numbers3[] = {5, 10, 15};

    /* Accessing Array Elements */
    /*
        -To access an array element, refer to its index number
        -Array indexes start with 0
    */
    int myNumbers[] = {25, 20, 75, 100};
    printf("%d\n", myNumbers[0]); // 25
    printf("%d\n", myNumbers[2]); // 75

    /* Set Array Size */
    /*
        -Another common way to create arrays, is to specify the size of the array and add elements later:
        -Using this method, you should know the size of the array in advance, in order for the program to store enough memory
        -You can't change the size of the array after delcaration
    */
    int myNumbers2[3];
    myNumbers2[0] = 1 ;
    myNumbers2[1] = 44;
    myNumbers2[2] = 63;

    /* Loop Through Arrays */
    /*
        -To loop through arrays dynamically we can use the sizeof() operator
        -It returns the memory size of a value
    */
    int myArray[] = {40, 21, 32, 14};
    int length = sizeof(myArray) / sizeof(myArray[0]);
    /*
        -myArray has 4 integers. Each int = 4 bytes => total memory = 4 * 4 = 16 bytes
        -sizeof(myArray) = 16 bytes
        -sizeof(myArray[0]) = 4 bytes
        -length = 16 / 4 = 4 (Number of elements)
    */
    for (int i = 0; i < length; i++) {
        printf("Number %d: %d\n", i, myArray[i]);
    }
    
    return 0;
}