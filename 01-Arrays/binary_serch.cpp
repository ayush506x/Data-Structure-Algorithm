#include <stdio.h>

int main() {
    int a[100], n, i, serch, beg, end, mid, flag = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements of array (sorted):\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter searching element: ");
    scanf("%d", &serch);
    beg = 0;
    end = n - 1;
    while (beg <= end) {
        mid = (beg + end) / 2;
        if (a[mid] == serch) {
            printf("Element found at index %d\n", mid);
            flag = 1;
            break;
        }
        else if (a[mid] < serch) {
            beg = mid + 1; 
        }
        else {
            end = mid - 1; 
        }
    }
    if (flag == 0) {
        printf("Element not found\n");
    }
    return 0;
}
