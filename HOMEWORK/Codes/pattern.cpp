#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
//    //Q1 -  Hollow diamond
//    //upper hollow pyramid
//    for(int row = 0 ; row<n ; row = row + 1){
//    // spaces
//    for(int col = 0 ; col <n-row-1; col=col+1){
//     cout<<" ";
//    }
   
//    //stars and middle spaces 
//    for (int col = 0; col < 2*row+1 ; col++)
//    {
//     if(col== 0 || col == 2*row){
//         cout<<"*";
//     }
//     else{
//         cout<<" ";
//     }
//    }
//    cout<<endl;
//    }
   
//    //lower hollow pyramid
//    for(int row = 0 ; row<n; row=row+1){

//     //spaces
//     for(int col = 0 ; col<row; col++){
//         cout<<" ";
//     }
//  //stars and middle spaces 
//  for(int col = 0 ; col <2*n - 2*row -1 ; col++){
//     if ( col ==0 || col == 2*n-2*row-2){
//         cout<<"*";
//     }
//     else{
//         cout<<" ";
//     }
//  }
// cout<<endl;
//    }

//     // Q2 - fancy pattern 2 
// for(int row = 0 ; row<n ; row++){
//     for(int col = 0 ; col<row+1 ; col++){
//         cout<<row+1;
//         if(col != row ){
//             cout<<"*";
//         }
//     }
//     cout<<endl;
// }
// for (int row = 0; row < n; row++){
//     for(int col = 0 ; col<n-row ; col++){
//         cout<< n-row;
//     if(col != n-row-1){
//         cout<<"*";
//     }
//     }
//     cout<<endl;
// }

// //Q3 -  Alphabet palindrome pattern
// for (int row = 0; row < n; row++){
   
//     for(int col = 0 ; col<row+1 ; col++){
//     //cout<<col+1;  //for printing numeric palindrome pyramid
//     //for print alphabet panlidrome number
//     int ans = col+1;
//     char ch = ans + 'A'-1;
//     cout<<ch;
//     }

//    //reverse counting printing
//    for(int col=row ;col>=1;col=col-1){
//     //cout<<col;  //for printing numeric palindrome pyramid
//     //for print alphabet panlidrome number
//     int ans = col;
//     char ch = ans + 'A' -1 ;
//     cout<<ch;
//    }
//     cout<<endl;
    
//     }


// // Q4 -  Numeric palindrome equilateral pattern
// for (int row = 0; row < n; row++){
//     //spaces
//     for(int col = 0 ; col<n-row-1 ; col++){
//         cout<<" ";
//     }

//     for(int col = 0 ; col<row+1 ; col++){
//     //for printing numeric palindrome pyramid
//     cout<<col+1;
//     }

//    //reverse counting printing
//    for(int col=row ;col>=1;col=col-1){
//     //for printing numeric palindrome pyramid
//     cout<<col;  
//    }
//     cout<<endl;
    
//     }

// //Q5 - Numeric Full Pyramid
//  for(int row = 0 ; row<n ; row++){

//     //Spaces
//     for(int col = 0 ; col<n - row - 1 ; col++){
//         cout<< " ";
//     }

//     //Numbers
//     // row +1 elements print krne wale hai
//     //int start = row + 1 ;  //method 2
//     for(int col = 0 ; col<row+1 ; col++){
//         cout<< col + row + 1 ;   //method 1
//         // cout<<start<<" ";  //method 2
//         // start = start + 1;  //method 2
//     }
   
//    //Reverse counting 
//    int start = 2*row; 
//    for(int col = 0 ; col<row ; col++ ){
//     cout<< start;
//     start = start -1 ;
//    }
//     cout<<endl;
//  }


// Q6 - Numeric Hollow Pyramid
// for(int row = 0 ; row<n ; row++){
   
//    //Spaces
//    for(int col = 0 ; col<n-row -1 ; col= col+1){
//     cout<<" ";
//    }
   
//    //Numbers with spaces in between 
//    int start =1; 
//    for(int col = 0 ; col<2*row+1 ; col++){
//     //First row or last row
//     if( row==0 || row == n-1 ){
//      if(col %2 ==0 ){  
//         //even number
//      cout<<start;
//      start++; 
//      }
//      else{
//         //odd
//         cout<<" ";
//      }
//     } 
//     else{
//      // first column
//      if(col == 0){
//         cout<<1;
//      }
//         //last column
//         else if(col == 2*row){
//             cout<<row+1;
//         }
//         else{
//             cout<<" ";
//         }
//      }
//     }
//     cout<<endl;
//    }


//Q7 - Butterfly pattern
for ( int row = 0 ; row<n ; row++){
 // upper left triangle
 for(int col = 0 ; col < row +1 ; col++){
   cout<<"* ";
 }
 //spaces
 for(int col = 0 ; col <2*n-2*row-2 ; col++){
   cout<<" ";
 }
 cout<<endl;
}

    return 0;
}