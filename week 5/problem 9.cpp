#include <iostream>
using namespace std;

int main() {
    int arr[100], n, num, count = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number to find frequency: ";
    cin >> num;

    // Count frequency
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }

    cout << "Frequency of " << num << " = " << count;

    return 0;
}

