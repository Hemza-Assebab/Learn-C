/**
 * File: 02-basic-syntax/main.c
 * Topic: Basic Syntax
 * Author: Hemza Assebab
 * Date: 09/05/2025
 * Description:
 *    This file explains the basic syntax of a C program,
 *    including main function and simple printing
 */

/**
 * #include is a Pre-processor directive that includes the stdio header file.
 * It lets us work with functions like [printf(), scanf()...].
 * Header files add functionality to C programs.
 */
#include <stdio.h>

/**
 * @brief This function is the entry point of the program.
 * @return int Returns 0 if the program runs successfully, and 1 if not.
 */
int main() {

    /**
     * NOTE: 
     * - Every statement in C ends with a semicolon ";" .
     * - A computer program is a list of instructions to be executed by a computer.
     * - In a programming language these instructions are called statements
     * - If your program has many statements they will be executed one bye one in the same order as they're written
     */

    printf("Hello there\n"); // This statement instructs the compiler to print "Hello there"
    printf("I am Hemza\n");

    return 0;
}