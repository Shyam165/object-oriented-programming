// write a c++ prgram to impliment virutal function, create a base and drive class, each 
// class will have two mem func which will be overriden by drive class impliment
// run time polymorphism using main func
#include<iostream>
using namespace std;
class Base{
    public:
   virtual void display(){
        cout<<"this is display mem func of base class\n";

    }
  virtual  void show(){
        cout<<"this is show mem func of base class\n";
    }
};
class Derive: public Base{
   public:
   void display(){
    cout<<"this is display mem func of derive class\n";
   }
   void show(){
    cout<<"this is show mem func of derive class\n";
   }
};
int main(){
   Derive obj;
   Base *ptr;
   ptr=&obj;
   ptr->display();
   ptr->show();
   obj.display();
   obj.show();
}