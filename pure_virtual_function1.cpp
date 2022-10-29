
#include<iostream>
using namespace std;
class Base{
    protected:
    int value;
  public:
  virtual  void getData()=0;
    virtual void display()=0;
};
class Derived: public Base {
     public:
    void getData(){
    cout<<"enter the value\n";
    cin>>value;
  }
   
    void display(){
        cout<<"the value is "<<value<<endl;
    }
};
int main(){
    Derived obj1;
    Base *ptr;
    ptr=&obj1;
    obj1.getData();
    obj1.display();
   ptr->getData();
   ptr->display();
}