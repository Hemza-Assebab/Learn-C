/* Pointers */

#include <stdio.h>
int main() {
    /* What Is a Pointer ? */
    /*
        -A pointer is a variable that stores the memory address of another variable
        -So instead of holding a value directly a pointer holds the address where that value is stored

        & => Reference operator (Address of) gives you the memory address of a variable
        * => Dereference operator (Value pointed by) gives you the value stored at the address the pointer holds
    */
    int x = 10;
    int *pX = &x; 
    printf("%d\n", x);   // 10 | The value stored in the variable
    printf("%p\n", pX);  // 00000000005FFEC4 | The memory address where 10 is stored
    printf("%d\n", *pX); // 10 | The value stored in the pointed address memory

    /* Pointer Arithmetic */
    /*
        -Pointers can be incremented or decremented, but not in bytes; they move by the size of the type they point to
    */
    int arr[3] = {10, 20, 30};
    int *pArr = arr; // Same as &arr[0]
    printf("%d\n", *pArr); // 10
    pArr++; // Here, p++ moves the pointer by sizeof(int) bytes (typically 4 bytes), to the next element
    printf("%d\n", *pArr); // 20

    /* Pointers and Arrays */
    // In C, array names act like pointers to the first element
    int arr2[3] = {40, 50, 60};
    int *pArr2 = arr2;
    printf("%p\n", arr2);   // Same Address
    printf("%p\n", pArr2);  // Same Address
    printf("%d\n", *arr2);  // Same value
    printf("%d\n", *pArr2); // Same Value
    // Looping over an array using pointers:
    for (int i = 0; i < 3; i++) {
        printf("%d\n", *(pArr2 + i));
    }

    /* Pointer To Pointer */
    // A pointer can also store the address of another pointer
    int a = 5;
    int *pA = &a;
    int **pPa = &pA;
    // Values:
    printf("%d\n", a);     // 5
    printf("%d\n", *pA);   // 5
    printf("%d\n", **pPa); // 5
    // Addresses: (Each pointer has its own mem-address)
    printf("%p\n", &a);
    printf("%p\n", &pA);
    printf("%p\n", &pPa);

    /* Pointers and Functions */
    // By default C passes arguments by value:
    void addOne(int n) {
        n++;
        printf("%d\n", n);
    }
    int b = 2;
    addOne(b); // 3
    printf("%d\n", b); // 2

    // To modify the original variable, use a pointer (Passing by reference):
    void increment(int *n) {
        (*n)++;
        printf("%d\n", *n);
    }
    int c = 3;
    increment(&c); // 4
    printf("%d\n", c); // 4

    return 0;
}