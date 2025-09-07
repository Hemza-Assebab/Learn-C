/* Operators In C */

#include <stdio.h>

int main() {
    /* Arithmetic Operators */
    /*
        -Used for mathematical calculations:

        | Operator | Meaning             | Example | Result                 |
        | -------- | ------------------- | ------- | ---------------------- |
        |    +     | Addition            |  5 + 3  |  8                     |
        |    -     | Subtraction         |  5 - 3  |  2                     |
        |    *     | Multiplication      |  5 * 3  |  1                     |
        |    /     | Division            |  5 / 2  |  2  (integer division) |
        |    %     | Modulus (remainder) |  5 % 2  |  1                     |
    */

    /* Assignment Operators */
    /*
        -Used to assign values to variables:

        | Operator | Meaning           | Example  | Equivalent To |
        | -------- | ----------------- | -------- | ------------- |
        |    =     | Assign            |  a = 10  | —             |
        |    +=    | Add & assign      |  a += 5  |  a = a + 5    |
        |    -=    | Subtract & assign |  a -= 5  |  a = a - 5    |
        |    *=    | Multiply & assign |  a *= 5  |  a = a * 5    |
        |    /=    | Divide & assign   |  a /= 5  |  a = a / 5    |
        |    %=    | Modulus & assign  |  a %= 5  |  a = a % 5    |
    */

    /* Comparison (Relational) Operators */
    /*
        -Used to compare values ( result is true (1) or false (0) ):

        | Operator | Meaning          | Example  | Result |
        | -------- | ---------------- | -------- | ------ |
        |    ==    | Equal to         |  5 == 5  |    1   |
        |    !=    | Not equal to     |  5 != 3  |    1   |
        |    >     | Greater than     |  5 > 3   |    1   |
        |    <     | Less than        |  5 < 3   |    0   |
        |    >=    | Greater or equal |  5 >= 5  |    1   |
        |    <=    | Less or equal    |  3 <= 5  |    1   |
    */

    /* Logical Operators */
    /*
        -Used to combine conditions:

        | Operator | Meaning     | Example            | Result                |
        | -------- | ----------- | ------------------ | --------------------- |
        |    &&    | Logical AND |  (a > 0 && b > 0)  | "true" if both true   |
        |    ||    | Logical OR  |  (a > 0 || b > 0)  | "true" if one is true |
        |    !     | Logical NOT |  !(a > 0)          | Reverses result       |
    */

    return 0;
}