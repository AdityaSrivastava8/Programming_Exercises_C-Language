#include <stdio.h>

int main() {
    int year;  // Variable to store the input year

    printf("Enter a year: ");  // Prompt user for input
    scanf("%d", &year);        // Read the year

    // Check if the year is a leap year
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a Leap Year.\n", year);  // Leap year case
    } else {
        printf("%d is not a Leap Year.\n", year);  // Not a leap year
    }

    return 0;  // End of program
}

/*
Time Complexity: O(1)
- Only a fixed number of arithmetic and comparison operations are performed.

Space Complexity: O(1)
- Uses only one integer variable regardless of input size.
*/
