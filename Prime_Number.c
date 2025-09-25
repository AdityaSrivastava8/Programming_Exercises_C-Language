#include <stdio.h>   // For input/output functions like printf and scanf
#include <math.h>    // For sqrt() function

int main() {
    int n, i;
    int isPrime = 1;  // Assume the number is prime initially (flag = true)

    printf("Enter a number :");
    scanf("%d", &n);  // Read input from user

    if (n <= 1) {     
        isPrime = 0;  // Numbers <= 1 are NOT prime
    } else {
        // Check divisors only up to sqrt(n) for efficiency
        for (i = 2; i <= sqrt(n); i++) {  
            if (n % i == 0) {             
                isPrime = 0;  // Found a divisor → not prime
                break;        // Exit loop early, no need to check further
            }
        }
    }

    // Print result based on flag
    if (isPrime) 
        printf("%d is a prime number.\n", n);
    else 
        printf("%d is not a Prime Number.\n", n);

    return 0;  // Successful program termination
}

/*
Time Complexity: O(√n) 
We only check divisors up to sqrt(n), instead of all numbers up to n.

Space Complexity: O(1) 
Only a constant amount of space is used (variables n, i, and isPrime).
*/
