#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, sum, digit; 

    // Print header message
    printf("Armstrong numbers from 1 to 1000:\n"); 

    // Loop through numbers 1 to 1000
    for (n = 1; n <= 1000; n++) {  
        temp = n;              // Store the current number in temp for manipulation
        sum = 0;               // Initialize sum to 0 for each number

        // Extract each digit of the number
        while (temp != 0) {    
            digit = temp % 10;             // Get the last digit
            sum += digit * digit * digit;  // Add the cube of the digit to sum
            temp /= 10;                    // Remove the last digit from temp
        }

        // Check if the number is an Armstrong number
        if (sum == n) {                    
            printf("\n%d", n);             // Print the Armstrong number
        }
    }

    printf("\n");  // Print a newline for clean output
    return 0;      // Indicate successful execution
}

/*
Time Complexity: O(N * d)
where N = 1000 (upper limit) and d = number of digits in each number (max 3 for 1000)
=> effectively O(3000) ≈ O(N)

Space Complexity: O(1)
No extra space used apart from a few integer variables
*/
