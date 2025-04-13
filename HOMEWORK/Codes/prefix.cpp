#include <iostream>
#include <vector>
using namespace std;

int main(){

    // In this code we will calculate the prefix sum of an array
    // prefix is the sum of previous element + current element
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    vector<int> prefix(n, 0);
    prefix[0] = arr[0];
    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i - 1] + arr[i];
    }

    // Printing the arr vector
    cout << "Printing the original array " << endl;
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // Printing the prefix sum array
    cout << "The prefix sum array is  " << endl;
    for(int i = 0; i < n; i++){
        cout << prefix[i] << " ";
    }
    cout << endl;



    return 0;
}