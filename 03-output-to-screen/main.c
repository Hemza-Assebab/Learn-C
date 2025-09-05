/**
 * File: 03-output-to-screen/main.c
 * Topic: Output To Screen
 * Author: Hemza Assebab
 * Date: 09/05/2025
 */
#include <stdio.h>

int main() {

    /********************
     * printf()
     ********************/
    /**
     * @brief This function is used to ouput values or print text
     * @param char *format The format string
     * @param ... Variadic arguments which are the values to substitute into the format specifiers
     * @return int Returns the number of characters printed. It returns -1 in case of error
     */
    printf("Hello world !");
    printf("My name is Hemza !");

    /**
     * NOTES:
     * - When working with text, it must be wrapped inside double quotes "Text here"
     * - printf() doesn't insert a new line at the end of the ouput (Check \n escape sequence)
     */
    return 0;
}