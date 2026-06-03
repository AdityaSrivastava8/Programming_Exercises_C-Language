#include <stdio.h>
#include <math.h>

int main()
{
    // Variables to store Principal, Rate and Time
    float P, R, T;

    // Variables to store Simple Interest and Compound Interest
    float SI, CI;

    // Input principal amount
    printf("Enter Principal Amount: ");
    scanf("%f", &P);

    // Input rate of interest
    printf("Enter Rate of Interest: ");
    scanf("%f", &R);

    // Input time in years
    printf("Enter Time (in years): ");
    scanf("%f", &T);

    // Calculate Simple Interest
    // Formula: (P × R × T) / 100
    SI = (P * R * T) / 100;

    // Calculate Compound Interest
    // Formula: P × (1 + R/100)^T - P
    CI = P * pow((1 + R / 100), T) - P;

    // Display Simple Interest
    printf("\nSimple Interest = %.2f", SI);

    // Display Compound Interest
    printf("\nCompound Interest = %.2f", CI);

    // Indicate successful execution
    return 0;
}

/*
Time Complexity: O(1)

Reason:
- Input operations take constant time.
- Arithmetic calculations take constant time.
- pow() is treated as a constant-time library function.
- No loops or recursion are used.

Space Complexity: O(1)

Reason:
- Only a fixed number of variables are used:
  P, R, T, SI, and CI.
- No extra arrays or dynamic memory are used.
*/
