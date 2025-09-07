/* Data Types */
// The data type specifies the size and type of information to store or use

#include <stdio.h>
#include <stdbool.h>

int main() {

    /* int */
    /*
        -Stores whole numbers (positive, negative or zero)
        -Usually 4 bytes
        -Range: -2,147,483,648 => 2,147,483,647
        -Format specifier: %d
    */
    int age = 20;
    printf("%d\n", age);

    /* float */
    /*
        -Stores decimal numbers with single precision
        -Usually 4 bytes
        -Precision: ~6 digits
        -Format specifier: %f
    */
    float price = 19.1234;
    printf("%.2f\n", price);

    /* double */
    /*
        -Stores decimal numbers with double precision (Check this out)
        -Usually 8 bytes
        -Precision: ~15 digits
        -Format specifier: %lf
    */
    double pi = 3.141592653589793;
    printf("%.15lf\n", pi);

    /* bool */
    /*
        -Represents true (1) or false (0)
        -Internally it's stored as an "int" (0 or 1)
        -Format specifier: %d

        -NOTES:
            # To use this data type you must include <stdbool.h> header file
            # In the early versions of C there was no built-in Boolean type, programmers used "int" instead:
            #   int flag = 1;
            #   int flag = 0;
            # In the C99 standard the header file <stdbool.h> was added and it defines:
            #   #define bool _Bool
            #   #define true 1
            #   #define false 0
            # _Bool is a new keyword in C99, and bool is just a nicer alias for it
            # And without <stdboo.h> you’d have to use _Bool directly, which looks unusual:
            #   _Bool flag = 0;
    */
    bool isStudent = true;
    bool isGraduated = false;
    _Bool flag = 1;
    printf("isStudent: %d | isGraduated: %d\n", isStudent, isGraduated);
    
    /* char */
    /*
        -Stores a single character
        -Size: 1 byte
        -A char value musted wrapped between single quotes
        -It actually store ASCII values
        -Format specifier: %c or %d
    */
    char grade = 'A';
    printf("Grade: %c\n", grade);
    printf("ASCII value of %c: %d\n", grade, grade);

    /* string (Array of chars in C) */
    /*
        -C does not have built-in string type like Python/Java
        -Strings are just arrays of characters ending with \0 (null terminator)
        -Format specifier: %s
    */
    char name[] = "Hemza";
    printf("My name is: %s\n", name);

    return 0;
}