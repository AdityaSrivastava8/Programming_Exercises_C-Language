#include <stdio.h>

int main() {
    long long binary;      // Stores the binary number
    int decimal = 0;       // Stores the final decimal value
    int base = 1;          // Represents powers of 2 (2^0, 2^1, ...)
    int remainder;         // Stores the last binary digit

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        remainder = binary % 10;      // Extract last digit
        decimal += remainder * base;  // Add its decimal contribution
        base *= 2;                    // Move to next power of 2
        binary /= 10;                 // Remove last digit
    }

    printf("Decimal = %d\n", decimal);

    return 0;
}

/*
Time Complexity: O(n)
where n = number of digits in the binary number.

Space Complexity: O(1)
Only a constant amount of extra memory is used.
*/
