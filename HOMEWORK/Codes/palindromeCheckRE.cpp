#include <iostream>
#include <string>
using namespace std;

bool checkPalindrome(string& s, int start, int end){
    // Base case
    if(start >= end){
        return true;
    }

    // 1 case solve kardo
    if(s[start] != s[end]){
        return false;
    }

    // Baki recursion sambhal lega
    return checkPalindrome(s, start + 1, end - 1);
}


int main(){
    string s = "raceycar";
    int start = 0;
    int end = s.size() - 1;

    bool ans = checkPalindrome(s, start, end);

    if(ans){
        cout << "It is palindrome" << endl;
    }
    else {
        cout << "It is not a palindrome" << endl;
    }
    return 0;
}