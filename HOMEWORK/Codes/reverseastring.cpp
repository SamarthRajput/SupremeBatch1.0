#include<iostream>
#include<string>
using namespace std;

void reverseastring(string& str , int start , int end){
    //base case
    if(start >= end){
        return;
    }
    swap(str[start] , str[end]);
    reverseastring(str , start+1 , end-1);
}

int main(){
    string str = "helloworld";
    cout << str << endl;
    int start = 0;
    int end = str.size()-1;
    reverseastring(str , start , end);
    // cout << str[start] << endl;
    // cout << str[end] << endl;
    cout << str << endl;

    return 0;
}