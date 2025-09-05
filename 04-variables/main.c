/* Variables */
#include <stdio.h>

int main() {
    /* Basics of Creating Variables */
    /*
        -A variables is a container for storing data values, like numbers and characters.

        -Syntax: type variableName = value
            - type         -> The type of the value to store
            - variableName -> Name of the variable
            - value        -> Value you want to store

        -Variable naming rules:
            - Variables must be declared with unique names
            - Names can contain letters, digits and undersores
            - Names are-case sensitive (myVar and myvar are different variables)
            - Names can't contain whitespaces or special characters (@, !, #...)
            - Reserved keywords can't be used as names (int, for...)

        -NOTE: It's recommeneded to use descriptive names for variables to make them understandable
     */
    int age = 25;

    /* Declaring, Initilizing and Re-assigning */
    /*
        You can also declare variables, and assign values to them later on
        Example:
            int a;
            a = 12;

        -You can also re-assign a variable's value:
            int b = 10;
            b = 21; // Now b contains 21 instead of 10
    */

    /* Declaring Multiple Variables */
    // Method 1
    int a = 10, b = 20, c = 30;
    // Method 2:
    int d, e, f;
    d = 40;
    e = 50;
    f = 60;

    return 0;
}