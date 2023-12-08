#include<iostream>
#include "bird.h"
using namespace std;

void birddoesSomething(Bird *&bird){
    bird->eat();
    bird->fly();
}

int main(){
    Bird *bird1 = new sparrow();
    birddoesSomething(bird1);
    Bird *bird2 = new eagle();
    birddoesSomething(bird2);

    return 0 ;
}