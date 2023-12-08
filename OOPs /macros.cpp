#include<iostream>
using namespace std;

#define PI 3.14
#define MAXX(x , y) (x > y ? x : y)

void circlearea(int r){
    cout << PI * r * r;
}

void fun(){
    int x = 6;
    int y = 17;
    int c = MAXX(x , y);
}

int main(){

    int r = 2;
    circlearea(r);
    
    

    return 0;
}