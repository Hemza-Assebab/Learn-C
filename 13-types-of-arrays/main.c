/* Types Of Arrays */

#include <stdio.h>

int main() {
    /* One Dimensional Array (1D) */
    /*
        -A simple list of elements of the same type
        -Think of it as a row of lockers, each holding one value
    */
    int marks[] = {90, 85, 70, 60, 88};

    /* Two Dimensional Array (2D) */
    /*
        -An array of arrays -> works like table (rows x columns)
        -Think of it as a spreadsheet with rows and columns
    */
    // 2 rows, 3 columns (per each row)
    int matrix[2][3] = {
        {1, 2, 3},
        {44, 63, 1}
    };
    // Looping through these values using nested loops
    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int columns = sizeof(matrix[0]) / sizeof(matrix[0][0]);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d\n", matrix[i][j]);
        }
    }

    /* Multi-Dimensional Array (3D) */
    /*
        -Array of arrays of arrays
        -Works like a cude or higher dimensions
        -Multidimensional arrays are useful when your data is arranged in rows and columns, like a table, grid, or matrix.
    */
    int cube[2][2][3] = {
        {
            {1, 2, 3},
            {4, 5, 6}
        },
        {
            {7, 8, 9},
            {10, 11, 12}
        }
    };
    
    return 0;
}