#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string line, word, currentWord;
    int count = 0;

    cout << "Enter a line of text: ";
    getline(cin, line);

    cout << "Enter the word to count: ";
    cin >> word;

    stringstream ss(line);

    while (ss >> currentWord)
    {
        if (currentWord == word)
            count++;
    }

    cout << "Number of occurrences of \"" << word
         << "\": " << count << endl;

    return 0;
}

