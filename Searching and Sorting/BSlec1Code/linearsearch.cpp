#include <iostream>
using namespace std ;
bool find(int arr[] , int size , int key){
  for (int i = 0 ;  i<size ; i++){
    if(arr[i] == key){
      return true;
    }
  }
  return false;
}

int main() {
int arr[] = { 1, 2, 3 ,4 , 5 , 6};
  int size = 6;
  cout<<"enter the key to find"<<endl;
  int key;
  cin>>key;
  if(find(arr , size , key)){
    cout<<"found"<<endl;
  }
else {
  cout<<"not found";
}

  return 0 ;
}