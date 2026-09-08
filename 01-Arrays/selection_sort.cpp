#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        int a = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[a]) {
                a = j; 
            }
        }
        int temp = arr[a];
        arr[a] = arr[i];
        arr[i] = temp;
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
