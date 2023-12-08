#include<iostream>
using namespace std;

int main(){

//Q1 -  Hollow Square Pattern
// int n;
// cin>>n;
// for(int row =0 ; row <n ; row++){
//    for(int col= 0  ; col<n ;col++){ 
//     if(row==0 || row==n-1){
//     cout<<"*";
//     }
//     else{
//     // cout<<"*";    //method2
//     // for(int col = 0 ; col < n-2 ; col++){    //method2
//     //     cout<<" ";    //method2
//     // }    //method2
//     // cout<<"*";    //method2

//     //method1
//     if(col==0 || col == n-1){
//         cout<<"*";
//     }
//     else{
//         cout<<" ";
//     }
//     }
//     }
//     cout<<endl;
// } 

  //Q2 - Solid Square Pattern
//   int n ;
//   cin>>n;
//   for(int row =0 ; row<n ; row++){
//     for(int col = 0 ; col<n ; col++){
//         cout<<"*";
//     }
//     cout<<endl;
//   }

  //Q3 - Hollow Inverted half pyramid
//   int n ; 
//   cin>>n;
//   for(int row =0 ; row < n ; row++){
//     for(int col = 0 ; col<n-row;col++){
//         if(row==0 || row == n-1){
//             cout<<"*";
//         }
//         else{
//         if(col==0){
//             cout<<"*";
//         }
//         else if (col==n-row-1){
//             cout<<"*";
//             }
//         else{
//             cout<<" ";
//         }
     
//     }
//     }
//     cout<<endl;
//   }
  
 //Q4- Hollow Full Pyramid
//  int n ;
//  cin>>n;
 
// for(int row =0 ; row<n ; row++){

// //spaces
// for(int col =0 ; col < n-row-1 ; col++){
//   cout<<"  ";
// }
//   for(int col =0 ; col<2*row+1 ; col++){
//     if(row==0 || row==n-1){
//   cout<<"* ";
//     }
//     else if (col==0 || col == 2*row ){
//       cout<<"* ";
//     }
//     else{
//       cout<<"  ";
//     }
//   }
//   cout<<endl;
// }

//Q5 - Numeric Hollow Pyramid
// int n ; 
// cin>> n ;
// for(int row =0 ; row < n ; row = row +1 ){
// for(int col =0 ; col <row+1 ; col++){
//  if(col==0){
//   cout<<1<<" ";
//  }
//  else if (row==n-1){
//   cout<<col+1 <<" ";
//  }
//  else if(col==row){
//   cout<<row+1<<" ";
//  }
//  else{
//   cout<<"  ";
//  }
// }
// cout<<endl;
// }

//Q6 - Numeric Hollow Inverted Half Pyramid
// int n ; 
// cin>>n ;
// for(int row =0 ; row<n ; row++){
//   for(int col =0 ; col <n - row ; col++){
//    if(col==n-row-1){
//    cout<<5<<" ";
//    }
//    else if(col==0){
//     cout<<row+1<<" ";
//    }
//    else if (row==0){
//     cout<<col+1<<" ";
//    }
//    else{
//     cout<<"  ";
//    }
   
//   }
//   cout<<endl;
// }


// Q7 - Numeric Palindrome Equilateral Pyramid
// int n ; 
// cin>>n ;
// for(int row = 0 ; row<n ; row++){
//   //spaces
//   for(int col = 0 ; col < n - row -1 ; col++){
//     cout<< "  ";
//   }
//   //stars
//   int col;
//   for( col = 0 ; col<row+1 ; col =col+1){
//     cout<<col+1<<" ";
//   }
//   for(int col = row ; col>=1 ; col--){
//     cout<<col<<" ";
//   }
//   cout<<endl;
// }

  return 0;
}
