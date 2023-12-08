#include<iostream>
using namespace std;

class animal {
public:
    // //State or properties
    // int age;
    // string name;

    // //default constructor
    // animal(){
    //     this->age = 0;
    //     cout<<" constructor is called ";
    //     cout<<endl; 
    // }


    //Behaviour or function
    void eat();
        // cout<<"eats";
    

    // void sleep(){


    // }

};

class dog: public animal{
    public:
    void eat(){
        cout<<"dog eats bone";
    }

};


class solution{
    private:
    int weight;

    public:
    void setweight(int w){
        weight = w;
    }
    void getweight(){
        cout << weight << endl;
    }

};

class Animal{
    public:
    int age;
    public:
    Animal(){
        cout<<"default constructor"<<endl;
    }
    Animal(Animal &obj){
        this->age = obj.age;
        cout<<"copy constructor"<<endl;
    }
};

class maths{
    public:
    void sum(int a , double b){
        cout<< a+b<<endl;
    }
    void sum(float a , double b){
        cout<< a+b<<endl;
    }
};

int main(){

    //Object creation

    //static
    // animal ramesh;
    // ramesh.age = 12;
    // ramesh.name = "lion";
    // cout << "age is " << ramesh.age << endl;
    // cout << "name is " << ramesh.name << endl;

    // //dynamic

    // animal * suresh = new animal;

    // //access properties 
    // (*suresh).age = 15;
    // (*suresh).name = "billi";

    // //alternate method to access
    // suresh->age = 16;
    // suresh->name = "dog";

    // dog d;
    // d.eat();

    // solution weightprinting;
    // weightprinting.setweight(101);
    // weightprinting.getweight();

    // Animal hello = c;
    // Animal ridhima;
    // Animal krish(ridhima);
    
    maths obj;
    obj.sum(2,5.3);
    obj.sum(2.7f,3.1);


    return 0 ;
}