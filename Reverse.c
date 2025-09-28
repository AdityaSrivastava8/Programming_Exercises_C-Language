#include<stdio.h>

int main() {
    int n , rev = 0;   // n = input number, rev = stores the reversed number
    
    printf("Enter a Number :");  
    scanf("%d",&n);    // Read input number
    
    // Loop runs until n becomes 0
    while(n != 0) {
        rev = rev * 10 + (n % 10);   // Extract last digit and build reversed number
        n /= 10;                     // Remove last digit (n = n / 10)
    }
    
    printf("Reverse = %d\n", rev);   // Print reversed number
    return 0;
}

/*
Time Complexity: O(d)  
- d = number of digits in n  
- Each digit is processed once.

Space Complexity: O(1)  
- Only a few integer variables are used, no extra memory required.
*/
