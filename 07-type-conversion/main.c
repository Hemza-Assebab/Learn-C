/* Type Conversion In C */
/*
    -Type conversion means changing one data type into another
    -In C, this can happen in two ways:
*/

#include <stdio.h>

int main() {

    /* Implicit Type Conversion */
    /*
        -Done automatically by the compiler
        -Happens when you mix differebt types in an expression
        -It follows the rule: smaller -> larger type (to avoid data loss)
        -The hierarchy goes like: char -> int -> float -> double
    */
    int num = 10;
    char grade = 'A';
    int result = num + grade; // char converted to int
    printf("%d\n", result); // 75

    /* Explicit Type Conversion */
    /*
        -Done manually by the programmer
        -Syntax: (type) expression
    */
    double price = 5.99;
    int x = (int) price; // Explicit conversion from double to int
    printf("%d\n", x); // 5

    return 0;
}