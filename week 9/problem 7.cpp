
#include <iostream>
using namespace std;

int maximum(int arr[], int n)
{
    if (n == 1)
        return arr[0];

    int maxValue = maximum(arr, n - 1);

    if (arr[n - 1] > maxValue)
        return arr[n - 1];
    else
        return maxValue;
}

int minimum(int arr[], int n)
{
    if (n == 1)
        return arr[0];

    int minValue = minimum(arr, n - 1);

    if (arr[n - 1] < minValue)
        return arr[n - 1];
    else
        return minValue;
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

    cout << "Maximum element = " << maximum(arr, n);
    cout << "\nMinimum element = " << minimum(arr, n);

    return 0;
}

