#include <stdio.h>

int main() {
    int rows = 4, cols = 6;   // Rectangle dimensions

    // Outer loop runs 'rows' times
    for (int i = 1; i <= rows; i++) {

        // Inner loop runs 'cols' times for each row
        for (int j = 1; j <= cols; j++) {
            printf("* ");      // Print star
        }

        printf("\n");          // Move to next line
    }

    return 0;
}

/*
Time Complexity: O(rows × cols)
- Outer loop runs 'rows' times.
- Inner loop runs 'cols' times for each row.
- Total operations = rows × cols.

Space Complexity: O(1)
- Only a few integer variables are used.
- No extra array or dynamic memory is required.
*/
