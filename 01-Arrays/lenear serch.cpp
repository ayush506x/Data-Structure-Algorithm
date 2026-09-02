#include <stdio.h>

int main() {
    int a[100], n, i, serch, flag = 0;  
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter searching element: ");
    scanf("%d", &serch);

    for (i = 0; i < n; i++) {
        if (a[i] == serch) {
            printf("Element found at index %d\n", i); 
            flag = 1; 
            break;
        }
    }

    if (flag == 0) {
        printf("Element not found\n"); 
    }

    return 0;
}
