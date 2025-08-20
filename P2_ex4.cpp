// Word Counting
#include <iostream>
#include <string>
using namespace std;

int countword(string str) {
    int len = str.length();
    int word = 0;
    bool inWord = false;

    for (int i = 0; i < len; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            if (!inWord) {
                word++;     // new word starts
                inWord = true;
            }
        } else {
            inWord = false; // ended a word
        }
    }
    return word;
}

int main() {
    string text = "i am not finished.";
    int count = countword(text);
    cout << "There are " << count << " words.";
    return 0;
}
