#include <iostream>
using namespace std;

int main() {
    double a, b, c, d, e, f, g;

    cout << "Enter the values for a, b, c, d, e, f, and g: ";
    cin >> a >> b >> c >> d >> e >> f >> g;

    if (c == 0) {
        cout << "Error: Division by zero is not allowed (c cannot be 0)." << endl;
        return 1; 
    }

    double result = ((a + b / c * d - e) * (f - g));

    cout << "The result of the expression is: " << result << endl;

    return 0;
}

