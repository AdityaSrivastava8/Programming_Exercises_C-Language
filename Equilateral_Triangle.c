#include <stdio.h>

int main() {
    int n = 5;  // Number of rows

    for(int i = 1; i <= n; i++) {  // Controls rows

        // Print leading spaces to center the triangle
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars (1, 3, 5, 7, ...)
        for(int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");  // Move to next row
    }

    // Time Complexity: O(n²)
    // Reason: Two inner loops run for each row.

    // Space Complexity: O(1)
    // Reason: Only a few variables (n, i, j) are used.

    return 0;  // Program executed successfully
}
