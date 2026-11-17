#include <iostream>
#include <string>
using namespace std;

int main() {
    string S, T;

    cout << "Enter main string S: ";
    getline(cin, S);

    cout << "Enter string T: ";
    getline(cin, T);

    int pos = S.find(T);

    if (pos != string::npos) {
        cout << "Position: " << pos;
    } else {
        cout << "T is not present in S";
    }

    return 0;
}
