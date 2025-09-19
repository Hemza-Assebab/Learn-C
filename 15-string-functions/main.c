/* String Functions */
/*
    -In C you can use string functions to perform certain operations
    -To use them you must include the <string.h> header file in your program
*/


#include <stdio.h>
// <string.h> header file imported
#include <string.h>

int main() {
    /* strlen() */
    /*
        -Returns the number of characters before '\0'
        -Syntax: strlen(string)

        -NOTE: It's not the same as sizeof() because it also includes the '\0' character when counting
    */
    printf("%d\n", strlen("Hello")); // 5

    /* strcpy() & strncpy() */
    /*
        -Copies the value of one string to another
        -Syntax: strcpy(destination, source) | strncpy(destination, source, n)
        -Arguments:
            # destination => The variable where you want to copy the string
            # source      => The source where you want to copy the string from
            # n           => Number of characters to copy

        -NOTE: Make sure the size of the destination is large enough to avoid buffer overflow
    */
    char src1[] = "Hey there";
    char dest1[20] = "";
    strcpy(dest1, src1);
    printf("%s\n", dest1); // "Hey there"

    /* strcat() & strncat() */
    /*
        -Concatenates 2 strings
        -Syntax: strcat(destination, source) | strncat(destination, source, n)
        -Arguments:
            # destination => The variable where you want to append the string
            # source      => The source where you want to get the string from
            # n           => Number of characters to append
            
        -NOTE: Make sure the size of the destination is large enough to avoid buffer overflow
    */
    char src2[] = "C";
    char dest2[20] = "Hello ";
    strcat(dest2, src2);
    printf("%s\n", dest2); // "Hello C"

    /* strcmp() */
    /*
        -Compares two strings
        -Syntax: strcmp(str1, str2)

        -Returns 0 if the strings are equal
        -Returns <0 if str1 < str2
        -Returns >0 if str1 > str2
    */
    printf("%d\n", strcmp("Hello", "Hello")); // 0

    /* strchr() */
    /*
        -Finds the first occurrence of a character in a string
        -Syntax: strchr(string, character)

        -Retruns a pointer to the first match, or NULL if not found
    */
    char str1[] = "programming";
    char *p1 = strchr(str1, 'g');
    if (p1 != NULL) {
        printf("First %c is found at: %d\n", *p1, p1 - str1); // (address of 'g') - (address of start of string) = index 3
    }

    /* strrchr() */
    /*
        -Finds the last occurrence of a character in a string
        -It's similar to strchr() but starts searching from the end
        -Syntax: strrchr(string, character)

        -Returns a pointer to the first match, or NULL if not
    */
    char str2[] = "programming";
    char *p2 = strrchr(str2, 'g');
    if (p2 != NULL) {
        printf("%d\n", p2 - str2); // 10
    }

    /* strstr() */
    /*
        -Finds the first occurrence of a substring inside a string
        -Syntax: strstr(string, substring)
        
        -Returns a pointer to the start of the match, or NULL if not found
    */
    char str3[] = "I love programming";
    char *p3 = strstr(str3, "program");
    if (p3 != NULL) {
        printf("%d\n", p3 - str3); // 7
    }

    /* strpbrk() */
    /*
        -Finds the first occurrence of any character from a given set
        -Syntax: strpbrk(string, stringOfCharacters)

        -Returns a pointer to the first matching character, or NULL if none found
    */
    char str4[] = "hello world";
    char *p4 = strpbrk(str4, "aeiou");
    if (p4 != NULL) {
        printf("The first vowel found is %c at position: %d\n", *p4, p4 - str4);
    }

    return 0;
}