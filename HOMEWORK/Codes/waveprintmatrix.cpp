#include<iostream>
#include<vector>
using namespace std;

// Wave Print a Matrix
// In even number of column we will go top to bottom 
// In odd number of column we will go bottom to top 

void wavePrintMatrix(vector<vector<int> > matrix){
    int row = matrix.size();
    int column = matrix[0].size();
    // print starting column
    for(int startCol = 0; startCol < column; startCol++ ){
        // even number of column -> Print top to bottom 
        if((startCol & 1) == 0){
            for(int i = 0; i < row; i++){
                cout << matrix[i][startCol] << " ";
            }
        }
        // odd number of column -> Print bottom to top
        else {
            for(int i = row - 1; i >= 0; i--){
                cout << matrix[i][startCol] << " ";
            }
        }
    }
}



int main(){

    vector<vector<int> > matrix {
        {1, 2, 3, 4}, 
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20}
    };

    wavePrintMatrix(matrix);

    return 0;
}