#include<iostream>
#include<vector>
using namespace std;

// TC -> O(N^2)
// SC -> O(N)

// This will handle print all the subarrays once, it doesnot increment start  
void printAllSubArrays_util(vector<int>& nums, int start, int end){
    // Base case    
    if(end == nums.size()){
        return;
    }

    // 1 case solve kardo
    for(int i = start; i <= end; i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    // Baki recursion sambhal lega
    printAllSubArrays_util(nums, start, end + 1);
}

void printSubArrays(vector<int>& nums){
    for(int start = 0; start < nums.size(); start++){
        int end = start;
        printAllSubArrays_util(nums, start, end);
    }
}

int main(){

    vector<int>nums {1, 2, 3, 4, 5};
    int start = 0;
    int end = 0;

    printSubArrays(nums);


    return 0;
}