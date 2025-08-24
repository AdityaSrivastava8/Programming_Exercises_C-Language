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

// Another Method
#include <stdio.h>

// Recursive function to calculate factorial
long long factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) 
        return 1;

    // Recursive call: n * factorial of (n-1)
    return n * factorial(n - 1);
}

int main() {
    int num;

    // Prompt user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for negative input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call recursive factorial function and print result
        printf("Factorial of %d = %lld\n", num, factorial(num));
    }

    return 0; // Successful execution
}

/*
Time Complexity (TC): O(n) 
  - Each function call reduces n by 1 until base case.
Space Complexity (SC): O(n) 
  - Due to recursion stack; n calls are on the stack at peak.
*/
