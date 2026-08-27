#include <stdio.h>

#define MAX_SIZE 6   // Macro for maximum array size

int main() {
    int arr[MAX_SIZE];   // Array declaration
    int n, i, newElement;

    printf("Enter number of elements (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n > MAX_SIZE || n <= 0) {
        printf("Invalid array size! Please enter between 1 and %d.\n", MAX_SIZE);
    } else {
        // Input initial elements
        printf("Enter %d elements:\n", n);
        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        // Insert new element at the end
        if (n == MAX_SIZE) {
            printf("Array is full! Cannot insert new element.\n");
        } else {
            printf("Enter element to insert at end: ");
            scanf("%d", &newElement);

            arr[n] = newElement;  // Place at end
            n++;                  // Increase size

            // Display updated array
            printf("Array after insertion: ");
            for (i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
    }

    return 0;
}
