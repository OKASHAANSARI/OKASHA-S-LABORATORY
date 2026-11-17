#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    double arr[100], sum = 0, mean, variance = 0, sd;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " real numbers:\n";
    for (int i = 0; i < n; i++)
        cin >> *(arr + i);

    // Calculate sum using pointer
    for (int i = 0; i < n; i++)
        sum += *(arr + i);

    mean = sum / n;

    // Calculate variance using pointer
    for (int i = 0; i < n; i++)
        variance += (*(arr + i) - mean) * (*(arr + i) - mean);

    variance = variance / n;
    sd = sqrt(variance);

    cout << "\nSum = " << sum;
    cout << "\nMean = " << mean;
    cout << "\nStandard Deviation = " << sd << endl;

    return 0;
}

