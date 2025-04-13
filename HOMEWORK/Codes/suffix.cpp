#include<iostream>
#include<vector>
using namespace std;

int main(){

    // In this code we will calculate the suffix sum of an array
    // suffix is the sum of the current element and all elements after it.
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    vector<int> suffix(n, 0);

    suffix[n - 1] = arr[n - 1];
    for(int i = n - 2; i >= 0; i--){
        suffix[i] = suffix[i + 1] + arr[i];
    }

    // Printing the arr vector
    cout << "Printing the original array " << endl;
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    // Printing the suffix sum array
    cout << "The suffix sum array is  " << endl;
    for(int i = 0; i < n; i++){
        cout << suffix[i] << " ";
    }
    cout << endl;


    return 0;
}