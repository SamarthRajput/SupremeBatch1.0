#include<iostream>
#include<string>
using namespace std;

// Find the last occurence of char x in string s

void LeftToRightRE(string& s, char c, int& ans, int index){
    // Base case 
    if(index >= s.size()){
        return;
    }
    // 1 case solve kardo
    if(s[index] == c){
        ans = index;
    }
    // Baki recursion sambhal lega
    LeftToRightRE(s, c, ans, index + 1);
}

void RightToLeftRE(string& s, char c, int& ans, int index){
    // Base Case
    if(index < 0){
        return;
    }
    // 1 Case solve kardo
    if(s[index] == c){
        ans = index;
        return;
    }
    RightToLeftRE(s, c, ans, index - 1);
}

int main(){
    string s  = "abcddefg";
    char c = 'd';
    int ansLTR = -1;
    int ansRTL = -1;
    int indexLTR = 0;
    int indexRTL = s.size();
    // Approach 1 -> Search from left to right Iteratively
    // Approach 2 -> Search from right to left Iteratively
    // Approach 3 -> Using stl function strrchr() -> this function returns the last occurence of the char present in the string
    // Approach 4 -> We will recursively solve the approach 1 and approach 2
    // TC -> O(n)  SC -> O(n)

    LeftToRightRE(s, c, ansLTR, indexLTR);
    RightToLeftRE(s, c, ansRTL, indexRTL);
    cout << ansLTR << endl;
    cout << ansRTL << endl;
}