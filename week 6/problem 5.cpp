#include <iostream>
using namespace std;

int main() {
    char str[] = "Hello World";
    char *ptr = str;

    cout << "String: ";

    while (*ptr != NULL) {
        cout << *ptr;
        ptr++;
    }

    return 0;
}

