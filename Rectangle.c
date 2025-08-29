#include <stdio.h>

int main() {
    int n = 5;   // Size of the square (same as `n = 5` in Python)
    int i, j;    // Loop counters

    // Outer loop: controls the number of rows
    for (i = 0; i < n; i++) {        // Runs 'n' times

        // Inner loop: controls the number of columns
        for (j = 0; j < n; j++) {    // Runs 'n' times for each row
            printf("*    ");         // Print star followed by spaces (no newline)
        }

        printf("\n");                // After finishing one row, move to next line
    }

    return 0; // Exit program successfully
}

/*
Time Complexity: O(n^2) 
- Outer loop runs 'n' times
- Inner loop runs 'n' times for each outer iteration
- Total operations = n * n = O(n^2)

Space Complexity: O(1)
- Only fixed variables (n, i, j) are used
- No extra memory dependent on 'n'
*/
