#include <stdio.h>

int main() {
    // Program to print Fibonacci series

    int n, a = 0, b = 1, next, i;

    // Ask user for number of terms
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Print Fibonacci series up to n terms
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", a);          // Print current Fibonacci number

        next = a + b;              // Compute next term
        a = b;                     // Shift 'a' to 'b'
        b = next;                  // Shift 'b' to 'next'
    }

    printf("\n"); // Print newline after series
    return 0;

    // Time Complexity: O(n) - loop runs n times
    // Space Complexity: O(1) - constant space used
}
