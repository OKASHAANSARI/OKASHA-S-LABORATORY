#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence, word;
    int count = 0;
    int pos = 0;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Enter word to count: ";
    cin >> word;

    while ((pos = sentence.find(word, pos)) != string::npos) {
        count++;
        pos = pos + word.length();
    }

    cout << "Occurrences: " << count;

    return 0;
}
