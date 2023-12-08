#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>
using namespace std;

//INTERFACE
class Bird{
public:
    virtual void eat() = 0;
    virtual void fly() = 0;
    //classes that inherit this class has to implement these pure virtual functions.
};

//IMPLEMENTATION
class sparrow : public Bird{
    public:
    void eat(){
        cout << "sparrow is eating" << endl; 
    }
    void fly(){
        cout<< "sparrow is flying" << endl ;
    }

};

class eagle : public Bird{
    public:
    void eat(){
        cout << "eagle is eating" << endl; 
    }
    void fly(){
        cout<< "eagle is flying" << endl ;
    }

};

#endif // BIRD_H 
