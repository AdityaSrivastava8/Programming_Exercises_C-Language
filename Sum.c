#include<stdio.h> 
int main() {
    int n, sum = 0;
    printf("Enter a Number:");
    scanf("%d", &n);

    // Loop until the number becomes 0
    while (n != 0) {
        sum += n % 10;   // Add the last digit of n to sum
        n /= 10;         // Remove the last digit from n
    } 

    // Print the result
    printf("Sum of Digits = %d\n", sum); 
    return 0;
}

/*
Time Complexity: O(d) 
where d is the number of digits in n. Each iteration processes one digit.

Space Complexity: O(1) 
only a constant amount of extra space is used (sum and n).
*/
