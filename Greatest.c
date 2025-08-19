#include <stdio.h>

int main() {
    int a, b, c;  
    // Declare three integer variables a, b, and c to store user input

    printf("Enter three numbers: ");
    // Prompt user to enter three numbers

    scanf("%d %d %d", &a, &b, &c);
    // Read three integers from the user and store them in a, b, and c

    if (a >= b && a >= c)
        // Check if 'a' is greater than or equal to both 'b' and 'c'
        printf("%d is greatest\n", a);
    else if (b >= a && b >= c)
        // If above condition fails, check if 'b' is greater than or equal to both 'a' and 'c'
        printf("%d is greatest\n", b);
    else
        // If both conditions fail, 'c' is the greatest
        printf("%d is greatest\n", c);

    return 0;
    // End of program
}

/*
Time Complexity (TC): O(1) 
- Only a constant number of comparisons and operations are performed.

Space Complexity (SC): O(1)
- Only a fixed amount of space is used for three integer variables.
*/
