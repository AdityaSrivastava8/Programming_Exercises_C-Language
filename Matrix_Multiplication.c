#include <stdio.h>

int main() {
    // First array
    int a[5] = {1, 2, 3, 4, 5};

    // Second array
    int b[5] = {6, 7, 8, 9, 10};

    // Array to store multiplication results
    int result[5];

    // Multiply corresponding elements of both arrays
    for (int i = 0; i < 5; i++) {
        result[i] = a[i] * b[i];
    }

    // Print the resulting array
    printf("Result array: ");

    // Traverse and print the result array
    for (int i = 0; i < 5; i++) {
        printf("%d ", result[i]);
    }

    printf("\n");

    return 0;
}

/*
Time Complexity: O(n)
Space Complexity: O(n)
*/
