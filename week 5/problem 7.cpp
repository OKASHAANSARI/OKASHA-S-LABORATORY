#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    int positive = 0, negative = 0;
    int odd = 0, even = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        // Check positive and negative
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;

        // Check odd and even
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "\nPositive numbers: " << positive << endl;
    cout << "Negative numbers: " << negative << endl;
    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;

    cout << "\nPositive elements: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            cout << arr[i] << " ";
    }

    cout << "\nNegative elements: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0)
            cout << arr[i] << " ";
    }

    cout << "\nEven elements: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            cout << arr[i] << " ";
    }

    cout << "\nOdd elements: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0)
            cout << arr[i] << " ";
    }

    return 0;
}

