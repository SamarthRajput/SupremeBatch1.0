#include<iostream>
using namespace std;

float areaofcircle(float radius){
float area= 3.14*radius*radius;
return area;
}

int oddoreven(int number){
  if(number%2==0){
    return 1 ;
  }
else{
    return 0 ; 
}
}

int factorial(int number){
  int fact=1;
for(int i = 1 ; i<=number ; i++){
  fact= fact*i ;
}
return fact;
}

bool primeno(int number){
for(int i = 2 ; i < number; i++){
if (number%i == 0){
  return false;
}
  }
  return true;
}

bool primenos(int number){
  for(int i = 2 ; i<number;i++){
    if (number%i == 0){
  return false;
}
  }
return true;
}

int reverseno(int number){
  int ans=0 , remainder;
  while(number != 0 ){
    remainder = number%10;
    ans = ans*10+remainder;
    number = number / 10 ;
  }
  return ans ;
}

int main(){
    
//Q1 - radius of circle
// float radius;
// cin>>radius;
// float area = areaofcircle(radius);
// cout<<"Area of circle is :" << area << endl;

//Q2 - Given Number is even or odd
// int number ; 
// cin>> number;
// if(oddoreven(number) == 1){
//     cout<<"even"<<endl;
// }
// else{
//     cout<<"odd"<<endl;
// }


//Q3 - Find The Factorial Of A Number
// int number ;
// cin>>number;
// int fact = factorial(number);
// cout<<"the factorial of the number is : "<<fact <<endl;


//Q4 - Check whether the number is prime or not
// int number;
// cin>>number;
// if(primeno(number)){
//   cout<<"prime"<<endl;
// }
// else{
//   cout<<"notprime"<<endl;
// }

//Q5 - Print All Prime No from 1 to N
// int number;
// cin>>number;
// for(int i = 2 ; i<=number ; i++){
//   bool isiprime = primenos(i);
//   if(isiprime){
//     cout<<i<<" ";
//   }
// }

//Q6 - Reverse an integer
int number;
cin>>number;
int reverse = reverseno(number);
cout<<"the reverse of "<<number<<" is "<<reverse<<endl;

  return 0 ;
}