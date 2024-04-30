#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string str) {
    string temp = str;
    reverse(temp.begin(), temp.end());
    return temp == str;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    if (isPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}

