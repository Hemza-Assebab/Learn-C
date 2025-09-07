/* Constants */
/*
    -A constant is a value that doesn't change during program execution
    -Unlike variables, constants remain fixed
    -There 2 ways to make constants:
*/

#include <stdio.h>

/* #define Preprocessor Directive */
/*
    -We can create constants using this directive
    -Important notes:
        # They are not type checked by the compiler (Simple text replacement)
        # They don't use memory
        # They're globaly scopped
*/ 
#define PI 3.14159

int main() {
    // Using constant created with #define
    printf("%f\n", PI);

    /* const Keyword */
    /*
        -Type checked by the compiler
        -They use memory (like a variable)
        -They follow variable scope rules
    */
    const int MAX = 100;
    printf("%d\n", MAX);

    return 0;
}