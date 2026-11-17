
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, sub;
    int pos;

    cout << "Enter main string: ";
    cin >> s;

    cout << "Enter substring: ";
    cin >> sub;

    cout << "Enter position: ";
    cin >> pos;

    s.insert(pos, sub);

    cout << "Result: " << s;

    return 0;
}
