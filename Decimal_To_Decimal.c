#include <stdio.h>

int main() {
    int decimal;           // Stores the decimal number
    long long binary = 0;  // Stores the binary equivalent
    int place = 1;         // Represents place values (1, 10, 100, ...)
    int remainder;         // Stores remainder after division by 2

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        remainder = decimal % 2;       // Get remainder (0 or 1)
        binary += remainder * place;   // Add digit to binary number
        place *= 10;                   // Move to next binary position
        decimal /= 2;                  // Update decimal number
    }

    printf("Binary = %lld\n", binary);

    return 0;
}

/*
Time Complexity: O(log n)
where n = decimal number.

Space Complexity: O(1)
Only a constant amount of extra memory is used.
*/
