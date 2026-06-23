#include <stdio.h>

int main() {
    int n = 5;  // Number of rows in the upper triangle

    // ---------------- Increasing Triangle ----------------
    for(int i = 1; i <= n; i++) {      // Controls rows (1 to n)

        for(int j = 1; j <= i; j++) {  // Prints stars equal to row number
            printf("* ");
        }

        printf("\n");                  // Move to next line after each row
    }

    // ---------------- Decreasing Triangle ----------------
    for(int i = n - 1; i >= 1; i--) {  // Starts from n-1 to avoid repeating middle row

        for(int j = 1; j <= i; j++) {  // Prints decreasing number of stars
            printf("* ");
        }

        printf("\n");                  // Move to next line after each row
    }

    // Time Complexity: O(n²)
    // Reason: Total stars printed = 1+2+...+n + (n-1)+(n-2)+...+1 = n²

    // Space Complexity: O(1)
    // Reason: Only fixed variables (n, i, j) are used.
    // No extra memory grows with input size.

    return 0;                          // Indicates successful execution
}
