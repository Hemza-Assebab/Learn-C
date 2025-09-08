/* Conditional Statements */

#include <stdio.h>

int main() {
    /* if Statement */
    /*
        -Executes a block of code only if the condition is true
        -Syntax:
            if (condition) {
                // Code to run if condition is true
            }
    */
    int age = 30;
    if (age >= 18) {
        printf("You can vote!\n");
    }

    /* is-else Statement */
    /*
        -Executes one block if true, another if false
        -Syntax:
            if (condition) {
                // Code if true
            } else {
                // Code if false
            }
    */
    int num = 7;
    if (num % 2 == 0) {
        printf("Even number\n");
    } else {
        printf("Odd number\n");
    }

    /* if-else if-else Statement */
    /*
        -Used for multiple conditions
        -The first true condition executes, and the rest are skipped
        -Syntax:
            if (condition1) {
                // code
            } else if (condition2) {
                // code
            } else {
                // Default code
            }
    */
    int marks = 92;
    if (marks >= 90) {
        printf("Great\n");
    } else if (marks >= 75) {
        printf("Good\n");
    } else if (marks >= 50) {
        printf("Average\n");
    } else {
        printf("Failed\n");
    }

    /* switch Statement */
    /*
        -Useful for fixed multiple choices (instead of writing many if-else)
        -Syntax:
            switch (expression) {
                case value1:
                    // code
                    break;
                case value2:
                    // code
                    break;
                default:
                    // Case of no matches
            }
    */
    int day = 1;
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
        case 6: // You can group multiple cases for the same result or process
            printf("Friday\n");
            break;
        default:
            printf("Weekend\n");       
    }

    return 0;
}