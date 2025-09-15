/* Strings */

#include <stdio.h>

int main() {
    /* What Is a String ? */
    /*
        -C doesn't have a String type to create string values
        -A string in C is just a 1D array of characters
    */
    char name[] = "Hamza"; // Internally it's stored like: {'H', 'a', 'm', 'z', 'a', '\0'}

    /* Declaring Strings */
    // As a char array:
    char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    // Shortcut (compiler adds '\0' automatically)
    char str2[] = "Hello";
    
    /* Accessing Strings */
    /*
        -Since strings are character arrays, you can access each character by its index (starting at 0)
        -You can modify strings because they're mutable
    */
    char name2[] = "Hamza";
    name2[1] = 'e';

    /* Looping Through Strings */
    // You can loop character by character until you hit the null terminator
    char myString[] = "Testing";
    int length = 0;
    for (int i = 0; myString[i] != '\0'; i++) {
        length++;
    }
    printf("%d\n", length);

    /* Literal Strings (Pointer) */
    /*
        -A string literal is stored as contiguous characters in memory ending with '\0'
        -A pointer to the first character is enough, using pointer arithmetic you can access the rest
        -And from there C knows how to step through memory to reach all other letters

        -NOTES:
            # These strings are stored in a read-only memory (text segment)
            # They are not writable (it can cause a crash)
    */
    /*
        -str3 is a pointer variable
        -It stores the address of the first character in the string literal "Hello"
        -That means str3 hold the memory address where "H":
            Read-only memory:   'H'  'e'  'l'  'l'  'o'  '\0'
            Pointer str3 ----->  ^
    */
    char *str3 = "Hello";
    printf("%s\n", str3);        // "Hello"
    printf("%c\n", *str3);       // 'H'
    printf("%c\n", str3[0]);     // 'H'
    // You can access other letters because of pointer arithmetic:
    printf("%c\n", *(str3 + 1)); // 'e'
    printf("%c\n", *(str3 + 2)); // 'l'

    /* Array of Strings */
    // Method 1: 2D character array (Use when you know the maximum length of the strings)
    char fruits[][10] = {"Apple", "Banana", "Cherry"};
    for (int i = 0; i < (sizeof(fruits) / sizeof(fruits[0])); i++) {
        printf("%s\n", fruits[i]);
    }
    // Method 2: Array of pointers to string literals (Use when string lengths differ a lot)
    /*
        -Each pointer points to a string literal stored in read-only memory
        -More memory efficient, but strings are not modifiable (unless copied)
    */
    char *fruits2[] = {"Pear", "Peach", "Watermelon"};
    for (int i = 0; i < (sizeof(fruits2) / sizeof(fruits2[0])); i++) {
        printf("%s\n", fruits2[i]);
    }

    return 0;
}