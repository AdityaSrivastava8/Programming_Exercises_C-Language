#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort starts
    for(i = 0; i < n - 1; i++) {              // Number of passes
        for(j = 0; j < n - i - 1; j++) {      // Compare adjacent elements
            if(arr[j] > arr[j + 1]) {         // Swap if elements are in wrong order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // Bubble Sort ends

    // Display sorted array
    printf("Sorted array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
Time Complexity:
- Best Case: O(n²)
- Average Case: O(n²)
- Worst Case: O(n²)

Space Complexity:
- O(1) (uses only one extra variable 'temp' for swapping)
*/
