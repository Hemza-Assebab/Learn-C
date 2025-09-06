/* Format Specifiers */
/*
    -Format specifiers are used with printf(), it acts as a placeholder for a variable's value.
    -A format specifier starts with % followed by a character
*/
#include <stdio.h>
#include <stdbool.h>

int main() {
    /* %d */
    // Used to display integers and booleans
    int age = 20;
    bool isTrue = true;
    printf("Age: %d | isTrue: %d\n", age, isTrue);

    /* %f */
    // Used with floats
    float price = 21.1334;
    printf("%f\n", price);
    printf("%.1f\n", price);

    /* %c */
    // Used with a character
    char currency = '$';
    printf("Currency: %c\n", currency);

    /* %s */
    // Used with strings (array of chars)
    char name[] = "Hemza";
    printf("My name is: %s\n", name);

    return 0;
}