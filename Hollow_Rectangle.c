#include <stdio.h>

int main() {
    int rows = 5, cols = 7;   // Rectangle dimensions

    // Outer loop controls rows
    for (int i = 1; i <= rows; i++) {

        // Inner loop controls columns
        for (int j = 1; j <= cols; j++) {

            // Print '*' on the boundary cells
            if (i == 1 || i == rows || j == 1 || j == cols)
                printf("* ");
            else
                printf("  ");   // Print spaces inside the rectangle
        }

        printf("\n");           // Move to the next row
    }

    return 0;
}

/*
Time Complexity: O(rows × cols)
- Outer loop runs 'rows' times.
- Inner loop runs 'cols' times for each row.
- Total iterations = rows × cols.

Space Complexity: O(1)
- Only a few integer variables are used.
- No extra memory is required.
*/
