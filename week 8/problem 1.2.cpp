#include <iostream>
#include <string>
using namespace std;

void deleteCharacters(string &str, int pos, int n)
{
    str.erase(pos, n);
}

int main()
{
    string str;
    int pos, n;

    cout << "Enter the string: ";
    getline(cin, str);

    cout << "Enter the position: ";
    cin >> pos;

    cout << "Enter number of characters to delete: ";
    cin >> n;

    deleteCharacters(str, pos, n);

    cout << "String after deletion: " << str << endl;

    return 0;
}

