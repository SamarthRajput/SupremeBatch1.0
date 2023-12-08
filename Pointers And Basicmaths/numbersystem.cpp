#include<iostream>
#include<cmath>
using namespace std;

int DecimaltoBinaryMethod1(int n ){
    //Division Method
    int binaryno = 0;
    int i = 0 ;
    while(n>0){
    int bit = n % 2;
    binaryno =  bit*pow(10 , i) + binaryno;
    n=n/2;
    i++;
    }
    return binaryno ;
}  

int DecimaltoBinaryMethod2(int n ){
    //Bitwise Method
    int binaryno = 0;
    int i = 0 ;
    while(n>0){
    int bit = n & 1;
    binaryno =  bit*pow(10 , i) + binaryno;
    n = n >> 1 ;
    i++;
    }
    return binaryno ;
}  

int BinarytoDecimal(int n){
    int decimal = 0;
    int i = 0 ;
    while(n){
        int bit = n%10;
       // int bit = n & 1;
        decimal = decimal + bit * pow(2 , i);
        n = n/10;
        i++;
    }
    return decimal;
}


int main(){
    // int n ;
    // cin>>n;

    // int binary = DecimaltoBinaryMethod1(n);
    // cout<<binary<<endl; 
    
    // int binary = DecimaltoBinaryMethod2(n);
    // cout<<binary<<endl;

    int binarynumber;
    cin>>binarynumber;
    cout<<BinarytoDecimal(binarynumber)<<endl;
    return 0 ;
}