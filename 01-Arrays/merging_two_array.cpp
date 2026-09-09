#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements in first array: ";
    cin >> n;
    int arr1[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    int a;
    cout << "Enter number of elements in second array: ";
    cin >> a;
    int arr2[a];
    cout << "Enter " << a << " elements:\n";
    for (int i = 0; i < a; i++) {
        cin >> arr2[i];
    }

    int merged[n + a];
    for (int i = 0; i < n; i++) {
        merged[i] = arr1[i];
    }
    for (int j = 0; j < a; j++) {
        merged[n + j] = arr2[j];
    }

    cout << "Merged array: ";
    for (int k = 0; k < n + a; k++) {
        cout << merged[k] << " ";
    }
    cout << endl;

    return 0;
}
