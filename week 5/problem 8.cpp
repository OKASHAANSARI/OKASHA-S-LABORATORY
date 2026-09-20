#include <iostream>
using namespace std;

int main() {
    int A[100], B[100], C[200];
    int n1, n2;
    int i = 0, j = 0, k = 0;

    cout << "Enter the number of elements in first array: ";
    cin >> n1;

    cout << "Enter elements of first sorted array:\n";
    for (int i = 0; i < n1; i++) {
        cin >> A[i];
    }

    cout << "Enter the number of elements in second array: ";
    cin >> n2;

    cout << "Enter elements of second sorted array:\n";
    for (int i = 0; i < n2; i++) {
        cin >> B[i];
    }

    // Merge the two sorted arrays
    while (i < n1 && j < n2) {
        if (A[i] < B[j]) {
            C[k] = A[i];
            i++;
        } else {
            C[k] = B[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of first array
    while (i < n1) {
        C[k] = A[i];
        i++;
        k++;
    }

    // Copy remaining elements of second array
    while (j < n2) {
        C[k] = B[j];
        j++;
        k++;
    }

    // Display merged array
    cout << "\nMerged array in sorted order:\n";
    for (int i = 0; i < k; i++) {
        cout << C[i] << " ";
    }

    return 0;
}

