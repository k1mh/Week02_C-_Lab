#include <iostream>
#include <string>
using namespace std;

void countfrequency(string str) {
    int freq[256] = {0}; 

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        freq[(unsigned char)ch]++; 
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            if (i == ' ')
                cout << "space: " << freq[i] << endl;
            else
                cout << char(i) << ": " << freq[i] << endl;
        }
    }
}

int main() {
    string word;
    cout << "Enter text: ";
    getline(cin, word); 
    cout << "Character frequencies: " << endl;
    countfrequency(word);
    return 0;
}
