#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int pos, n;

    cout << "Enter string: ";
    cin >> s;

    cout << "Enter position: ";
    cin >> pos;

    cout << "Enter number of characters to delete: ";
    cin >> n;

    s.erase(pos, n);

    cout << "Result: " << s;

    return 0;
}
