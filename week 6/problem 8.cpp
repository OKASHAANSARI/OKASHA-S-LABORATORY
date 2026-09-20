#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    int arr[100];
    int *ptr = arr;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> *(ptr + i);
    }

    for (int i = 0; i < n; i++) {
        sum = sum + *(ptr + i);
    }

    cout << "Sum = " << sum;

    return 0;
}

