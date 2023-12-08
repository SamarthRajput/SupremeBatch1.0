#include<iostream>
using namespace std;

//MERGE SORT

void merge(int* arr , int start , int end){

    int mid = start + (end - start)/2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    //assume to create arrays of len1 and len2 length using dynamic memory allocation
    int* left = new int[len1];
    int* right = new int[len2];

    //copy values from left part
    int k = start;
    for(int i = 0 ; i < len1 ; i++){
        left[i] = arr[k++];
        //k++;
    }

    //copy values from right part
    k = mid + 1;
    for(int i = 0 ; i < len2 ; i++ ){
        right[i] = arr[k++];
        //k++;
    }


    //Merge logic
    int leftindex = 0 ;
    int rightindex = 0;
    int mainarrayindex = start;

    while(leftindex < len1 && rightindex < len2){
        if(left[leftindex] < right[rightindex]){
            arr[mainarrayindex++] = left[leftindex++];
        }
        else{
            arr[mainarrayindex++] = right[rightindex++];
        }
    }

    //copy remaining elements from left array if right array exhausts
    while(leftindex < len1){
        arr[mainarrayindex++] = left[leftindex++];
    }

    //copy remaining elements from right array if left array exhausts
    while(rightindex < len2){
        arr[mainarrayindex++] = right[rightindex++]; 
    }
}



void Mergesort(int* arr , int start , int end){
    //Base case
    //start == end -> single element
    //start > end -> invalid element
    if(start >= end){
        return;
    }

    //Step A - Break the array into left and right part 
    int mid = start + (end - start)/2;
 
    //Step B - left part sort kardo recursion
    Mergesort(arr , start , mid);

    //Step C - right part sort kardo recursion
    Mergesort(arr, mid+1 , end);

    //Step D - Merge 2 sorted array
    merge(arr , start , end);
}


int main(){

    int arr[]={2,2,3,9,7,5};
    int n = 6;

    int start = 0;
    int end  = n-1;

    //calling mergesort function
    Mergesort(arr , start , end);


    //printing the array
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}