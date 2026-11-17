#include <iostream>
#include <string>
using namespace std;

void insertSubstring(string &mainStr, string subStr, int pos)
{
    mainStr.insert(pos, subStr);
}

int main()
{
    string mainStr, subStr;
    int pos;

    cout << "Enter the main string: ";
    getline(cin, mainStr);

    cout << "Enter the substring: ";
    getline(cin, subStr);

    cout << "Enter the position: ";
    cin >> pos;

    insertSubstring(mainStr, subStr, pos);

    cout << "String after insertion: " << mainStr << endl;

    return 0;
}

