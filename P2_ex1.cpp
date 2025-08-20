// Palindrome Checking 
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    // convert to lowercase
    for (char &c : str) {
        c = tolower(c);
    }
    int i = 0, j = str.length() - 1;
    for (; i < j; i++, j--) {
        // move i forward if space
        while (i < j && str[i] == ' ') i++;
        // move j backward if space
        while (i < j && str[j] == ' ') j--;
        if (str[i] != str[j]) {
            return false;
        }
    }
    return true;
}

int main() {
    string text = "A man a plan a canal Panama";
    if (isPalindrome(text)) {
        cout << "True";
    } else {
        cout << "False";
    }
    return 0;
}
