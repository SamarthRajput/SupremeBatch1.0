#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int arr[], int start, int end, int target){
    int mid = start + (end - start)/2;
    while(start <= end){
        if(arr[mid] == target){
            return mid;
        }
        else if (arr[mid] < target){
            start = mid + 1; 
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int exponentialSearch(int arr[], int size, int target){
    if(arr[0] == target){
        return 0;
    }

    int i = 1;
    while(i < size && arr[i] <= target){
        // i = i * 2; can be written as 
        // i *= 2; OR i = i << 1;
        i = i * 2;
    }

    return binarySearch(arr, i/2, min(i, size - 1), target);

}


int main(){
    int arr[] = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int size = sizeof(arr)/sizeof(int);
    int target = 13;


    int ans = exponentialSearch(arr, size, target);
    cout << ans;
    return 0;
}