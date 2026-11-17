
#include <iostream>
using namespace std;

void display(int arr[], int n, int index)
{
    if (index == n)
        return;

    cout << arr[index] << " ";

    display(arr, n, index + 1);
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

    cout << "Array elements are:\n";

    display(arr, n, 0);

    return 0;
}

