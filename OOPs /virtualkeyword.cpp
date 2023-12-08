#include<iostream>
using namespace std;

class Base{
    public:
    //we cannot create a constructor virtual
    Base(){
        cout << "Base ctor " <<endl;

    }
    //yes we can make a destructor virtual it help in saving us from memory leak case. 
    virtual ~Base(){
        cout << "base dtor " << endl;
    }

};

class Derived : public Base{

    int *a;

    public:
    Derived(){
        int *a = new int[1000];
        cout << "derived ctor" << endl;

    }
    ~Derived(){
        delete[] a; 
        cout << "derived dtor " << endl;
    }
};

int main(){

    Base *b = new Derived();
    delete b;

    return 0;
}