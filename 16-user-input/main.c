/* User Input */

#include <stdio.h>
#include <string.h>

int main() {
    /* scanf() */
    /*
        -Reads formatted input
        -Works for integers, floats, characters, strings
        
        -NOTE: For strings, scanf("%s", str) stops at spaces
    */
    int age;
    printf("Enter a your age: ");
    scanf("%d", &age); // & gives the variable's address
    printf("Your age is: %d\n", age);
    getchar(); // Consumes the "\n" so the next user input won't take it

    /* getchar() */
    // It reads a single character
    char currency;
    printf("Choose a currency: ");
    currency = getchar();
    printf("The chosen currency is: %c\n", currency);
    getchar();

    /* Reading Strings With scanf() */
    char name[20];
    printf("Enter your name: ");
    scanf("%s", &name); // Stops at space. If i type "Hemza Dev" only "Hemza" is token
    printf("Hello %s\n", name);
    getchar();

    /* fgets() */
    /*
        -Reads a line of text (including spaces) from a stream (like stdin = keyboard input)
        -It stores the text in a string (character array) and always adds a \0 null terminator
        -Syntax: fgets(string, size, stream)
        -Arguments:
            # string => Character array where input is stored
            # size   => Maximum number of characters to read (including \n and \0)
            # stream => Where to read from (stdin for keyboard)
    */
    char fullName[22];
    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);
    printf("Your full name is: %s\n", fullName);

    getchar();
    return 0;
}