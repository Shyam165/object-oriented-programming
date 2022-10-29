#include<iostream>
using namespace std;
class Base{ //this is a abstract class because it contain a pure virtual function and we cannot make a object of this class using Base 
            //we can make a object of this class using pointer which store the address of object of derived class
    public:
    virtual void display()=0;

};
class derived: public Base{
    public:
    void display(){
        cout<<"this is a derived class which is derive from the base class";
    }
};
int main(){
    derived d;
   // d.display();
   Base *ptr;
   ptr=&d;
   ptr->display();
}