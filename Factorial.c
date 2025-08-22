#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;  // Initialize result variable
    for(int i = 1; i <= n; i++) {  // Loop from 1 to n
        fact *= i;  // Multiply fact by current number
    }
    return fact;  // Return the final factorial value
}

int main() {
    int num;  
    printf("Enter a number: ");  
    scanf("%d", &num);  // Take input from user

    if(num < 0) {
        // Factorial is not defined for negative numbers
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call factorial function and print result
        printf("Factorial of %d = %lld\n", num, factorial(num));
    }

    return 0;  // Indicate successful execution
}

/*
Time Complexity (TC): O(n) -> The loop in factorial() runs n times
Space Complexity (SC): O(1) -> Only a few variables used, no extra space
*/
