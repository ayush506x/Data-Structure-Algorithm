#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE]; 
    int n, i, newElement;

    printf("Enter number of elements (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n > MAX_SIZE || n <= 0) {
        printf("Invalid array size! Please enter between 1 and %d.\n", MAX_SIZE);
    } else {
        printf("Enter %d elements:\n", n);
        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        if (n == MAX_SIZE) {
            printf("Array is full! Cannot insert new element.\n");
        } else {
            printf("Enter element to insert at beginning: ");
            scanf("%d", &newElement);
            for (i = n; i > 0; i--) {
                arr[i] = arr[i - 1];
            }

            arr[0] = newElement;  
            n++;                  
            printf("Array after insertion: ");
            for (i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
    }

    return 0;
}
