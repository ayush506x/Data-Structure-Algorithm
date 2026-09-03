#include <stdio.h>

int binarysearch(int a[], int beg, int end, int search) {
    if (beg > end) {
        return -1;  // element not found
    }

    int mid = (beg + end) / 2;

    if (a[mid] == search) {
        return mid;  // found at index mid
    }
    else if (a[mid] < search) {
        return binarysearch(a, mid + 1, end, search);  // search right half
    }
    else {
        return binarysearch(a, beg, mid - 1, search);  // search left half
    }
}

int main() {
    int a[100], n, i, serch, result;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array (sorted):\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter searching element: ");
    scanf("%d", &serch);

    result = binarysearch(a, 0, n - 1, serch);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
