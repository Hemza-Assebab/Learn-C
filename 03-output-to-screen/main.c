/* Output To Screen */
#include <stdio.h>

int main() {

    /* printf() */
    /*
        -This function is used to ouput values or print text
        -Arguments:
            # string => The format string
            # ...    => Variadic arguments which are the values to substitute into the format specifiers
        -It returns the number of characters printed. It returns -1 in case of error
    */
    printf("Hello world !");
    printf("My name is Hemza !");

    /*
        NOTES:
        - When working with text, it must be wrapped inside double quotes "Text here"
        - printf() doesn't insert a new line at the end of the ouput (Check \n escape sequence)
    */
   
    return 0;
}