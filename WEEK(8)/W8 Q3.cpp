#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence, oldWord, newWord;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Enter word to find: ";
    cin >> oldWord;

    cout << "Enter replacement word: ";
    cin >> newWord;

    int pos = sentence.find(oldWord);

    if (pos != string::npos) {
        sentence.replace(pos, oldWord.length(), newWord);
        cout << "Result: " << sentence;
    } else {
        cout << "Word not found";
    }

    return 0;
}
