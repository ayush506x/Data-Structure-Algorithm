#include <iostream>
using namespace std;
int main() {
    int a[] = {10, 12, 14, 15, 18};
    int n = 5;
    for (int i = 0; i < n-1; i++) {
        a[i] = a[i+1];
    }
    n--; 
    for (int i = 0; i < n; i++) { 
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
