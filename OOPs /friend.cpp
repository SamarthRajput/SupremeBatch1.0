#include<iostream>
using namespace std;

class A{
    private:
    int x;

    public:
    A(int _val):x(_val){}

    int getX() const{
        return x;
    }
    void setX(int _val){
        x = _val; 
    }

    friend class B; //making class B a friend of class A  -> friend class concept
    friend void print(const A &); //making function print a friend of class A -> friend function concept
};

class B{
    public:
    void print (const A&a){

        //indirectly printing value of x
        cout << a.getX() << endl; 

        //directly printing value of x using friend keyword
        cout << a.x << endl;
        
    }
};

void print(const A &a){
    cout << a.x << endl;
}

int main(){
     
    A a(5); 
    B b;
    b.print(a);
    print(a);
    return 0;
}