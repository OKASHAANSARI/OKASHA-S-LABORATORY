
#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    if (n == 0)
        return 0;

    return arr[n - 1] + sum(arr, n - 1);
}

int main()
{
    int arr[100], n;

    cout << "Enter the size of array: ";
    cin >> n;

    if (n <= 0 || n > 100)
    {
        cout << "Invalid array size.";
        return 0;
    }

    cout << "Enter array elements:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Sum of array elements = " << sum(arr, n);

    return 0;
}

