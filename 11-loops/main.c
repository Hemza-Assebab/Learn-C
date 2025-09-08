/* Loops In C */
// A loop lets you repeat a block of code multiple times until a condition is met

#include <stdio.h>

int main() {
    /* for Loop */
    /*
        -Used when you know exactly how many times you want to repeat
        -Syntax:
            for (initialization, condition, update) {
                // Code to run
            }
    */
    for (int i = 0; i < 5; i++) {
        printf("%d\n", i);
    }

    /* while Loop */
    /*
        -Used when the number of iterations is not known in advance
        -It checks the condition before running the block
        -Syntax:
            while (condition) {
                // Code to run
            }
    */
    int i = 0;
    while (i < 5)
    {
        printf("%d\n", i);
        i++;
    }

    /* do-while Loop */
    /*
        -Similar to while, but runs at least once (condition checked after the block)
        -Syntax:
            do {
                // Code to run
            } while (condition)
    */
    int j = 0;
    do {
        printf("%d\n", j);
        j++;
    } while (j < 5); // Even if j started greater than 5, the loop would run once
    
    /* Loop Control Statements */
    /*
        -Sometimes you want to control loop execution:
            # continue => skips the current iteration and go to the next
            # break    => exits the loop immediately
    */
    for (int i = 0; i < 10; i++) {
        if (i == 3) continue; // skip 3
        if (i == 5) break;    // stop Loop at 5
        printf("%d\n", i);
    }

    return 0;
}