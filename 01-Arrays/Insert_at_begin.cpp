#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, newElement, pos;

    printf("Enter number of elements (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n > MAX_SIZE || n <= 0) {
        printf("Invalid array size! Please enter between 1 and %d.\n", MAX_SIZE);
    } else {
        printf("Enter %d elements:\n", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        if (n == MAX_SIZE) {
            printf("Array is full! Cannot insert new element.\n");
        } else {
            printf("Enter element to insert: ");
            scanf("%d", &newElement);
            printf("Enter index to insert (0 to %d): ", n);
            scanf("%d", &pos);

            if (pos < 0 || pos > n) {
                printf("Invalid position! Must be between 0 and %d.\n", n);
            } else {
                // Shift elements to the right
                for (int i = n; i > pos; i--) {
                    arr[i] = arr[i - 1];
                }

                arr[pos] = newElement; // Insert at position
                n++;                   // Increase size

                printf("Array after insertion: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}
