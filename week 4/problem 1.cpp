#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << number << ((number % 2 == 0) ? " is even." : " is odd.");

    return 0;
}

