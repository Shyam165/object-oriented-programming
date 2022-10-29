
#include<iostream>
using namespace std;
class Base{
    public:
   virtual void display()=0;
};
class derived1: public Base{
    public:
    void display(){
        cout<<"this is derived class 1\n";
    }
};
class derived2: public derived1{
    public:
    void display(){
        cout<<"this is derived class 2\n";
    }
};
int main(){
   derived2  obj1;
   derived1 obj2;
   Base *ptr;  // we can make pointer object only for abstract class but we cannot make a object of abstract class
   ptr=&obj1;
   ptr->display();
   obj1.display();
   obj2.display();    // this is run time binding 
   //obj1.derived1::display();    //this is compile time binding 
   
}