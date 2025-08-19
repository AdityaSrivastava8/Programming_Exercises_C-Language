// 'Write a program that swaps values of two variables using two variable?' 
#include <stdio.h>

int main() {
    int a, b;  // Declare two integer variables — TC: O(1), SC: O(1)

    printf("Enter two numbers: ");           // Prompt the user — constant time
    scanf("%d %d", &a, &b);                  // Read two integers — constant time

    // Swap without a temporary variable using arithmetic operations
    a = a + b;  // Step 1 — store sum in a (O(1))
    b = a - b;  // Step 2 — retrieve original a into b (O(1))
    a = a - b;  // Step 3 — retrieve original b into a (O(1))

    printf("After swapping: a = %d, b = %d\n", a, b);  // Display swapped results — constant time
    return 0;  // Terminate program — constant time
}
