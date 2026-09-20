#include <iostream>
using namespace std;

int main() {
    char str1[100] = "Hello ";
    char str2[] = "World";

    char *p1 = str1;
    char *p2 = str2;

    // Move p1 to the end of str1
    while (*p1 != NULL) {
        p1++;
    }

    // Copy str2 to the end of str1
    while (*p2 != NULL) {
        *p1 = *p2;
        p1++;
        p2++;
    }

    *p1 = NULL;

    cout << "Concatenated String: " << str1;

    return 0;
}

