#include<iostream>
using namespace std;

class abc{
    public:

    int x;
    int *y;

    abc(int _x , int _y): x(_x), y(new int (_y)){}

    // //default dumb copy constructor : it does SHALLOW COPY
    // abc(const abc &obj){
    //     x = obj.x;
    //     y = obj.y;
    // }

    //deep copy constructor
    abc(const abc & obj){ 
        x = obj.x;
        y = new int (*obj.y);
    }

    void print() const{
        cout << "X: "<< x << endl;
        cout << "PTR Y: " << y << endl; 
        cout << "Content of Y(*y): " << *y << endl;
    }

    ~abc(){
        delete y;
    }

};

int main(){

    // abc a(1,2);
    // cout << "printing a " << endl;
    // a.print();
    // cout<< endl;

    // // copy value of a into b
    // // abc b(a);    //OR
    // abc b = a;

    // cout << "printing b " << endl;
    // b.print();
    // cout<< endl;


    // *b.y = 20;
    // cout << "printing b " << endl;
    // b.print();
    // cout<< endl;

    // cout << "printing a " << endl;
    // a.print();
    // cout<< endl;

    abc *a = new abc(1,2);
    abc b = *a;
    delete a;
    b.print();
    

    return 0;
}