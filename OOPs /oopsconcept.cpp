#include<iostream>
using namespace std;

class abc{
    int x ;
    int *y;
    int z;

    public:
    // //ctor : old style 
    // abc(int _x , int _y , int _z = 0){
    //     x = _x;
    //     y = new int (_y);
    //     z = _z;
    // }

    //ctor : new style -> initialisation list
    abc(int _x , int _y , int _z = 0) : x(_x) , y(new int(_y)) , z(_z){
        cout << "in init list"<<endl;
        *y = *y * 10;
    }


    int getX() const
    {
        return x; 
    }

    // void setX(int _val){
    //     x = _val;
    // }
     int getY() const
    {
        return *y;
    }

    // void setY(int _val){
    //     *y = _val;
    // }
     int getZ() const
    {
        return z;
    }
};

    void printABC(const abc &a){
        cout<<a.getX() <<" "<<a.getY() << " " << a.getZ() <<" " <<endl;
    }

int main(){

    // const int x = 5; //x is constant
    // cout << x << endl;
    //Initialization can be done but we cant re-assign a value 
    // x = 10 ; // it will give error
    // cout << x << endl;

    //2. const with pointer
    //I. CONST data , NON-CONST pointer
    // const int * a = new int(2);  
    // int const * a = new int(2);  //same as line number 13
    // cout << *a << endl;
    // // *a = 20;      // It will give error as we cant change the content of the pointer
    // // cout << *a << endl;
    // int b = 20 ;
    // a = &b;    //Pointer itself can be reassigned
    // cout << *a << endl;

    //II. CONST pointer , but NON-CONST data
    // int * const a = new int(2);
    // cout << *a << endl;
    // *a = 20;        //chal jayega
    // cout << *a << endl;
    // int b = 50 ;    // nahi chalega
    // a = &b ;
    // cout << *a << endl;


    //III. CONST pointer , CONST data
    // const int * const a = new int(20);
    // cout << *a << endl;
    // // *a = 50;    //nahi chalega
    // // int b = 100;
    // // a = &b;     //nahi chalega 
    // // cout<< *a <<endl;


    abc a(1,2);
    printABC(a);



    return 0;
}