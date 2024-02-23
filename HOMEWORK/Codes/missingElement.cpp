//Ques => missing element from an array with duplicates
// n -> size of array
// arr[i] E(belongs to) [1,n]

//eg => arr[5] = {1,3,5,3,4}; here mssing element is 2
 
#include<iostream>
using namespace std;

    //Method 1 => visited method
    //this method works due to the condition 
    //T.C => O(n)  S.C => O(1)
void findMissing(int arr[] , int n){
    for(int i = 0; i<n; i++){
        int index = abs(arr[i]);
        if(arr[index-1] > 0){       //visited condition
            arr[index-1] = arr[index-1]*(-1); 
        }
    }

    // for(int i = 0 ; i<n ;i++){
    //     cout << arr[i] <<" ";
    // }

    //all positive indexes are missing
    for(int i = 0;i<n; i++){
        if(arr[i] > 0)
        cout << i+1 <<" ";
    }
}

    //Method 2 => Sorting + Swapping Method
    //T.C => O(n)  S.C => O(1)
void ssmethod(int arr[] , int n){
    int i = 0;
    while(i<n){
        int index = arr[i] - 1;
        if(arr[i] != arr[index]){
            swap(arr[i] , arr[index]);
        }
        else{
            i++;
        }
    }
    // for(int i = 0 ; i<n ;i++){
    //     cout << arr[i] <<" ";
    // }
    for(int i =0; i<n ;i++){
        if(arr[i] != i+1){
            cout << i+1 << " ";
        }
    }
}

int main(){
    int n;
    int arr[5] = {1,3,5,3,4};
    n = sizeof(arr)/sizeof(int);
    // findMissing(arr , n);
    ssmethod(arr,n);

    return 0;
}