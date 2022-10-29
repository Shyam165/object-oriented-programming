//write a c++ prg to impliment run time polym to cal area of rectangle and square 
#include<iostream>
using namespace std;
class Rectangle{
    int length;
    int breadth;
    public:
     virtual void getData(){
        cout<<"enter the value of length and breadth\n";
        cin>>length>>breadth;
    }
   virtual void Area(){
        int area=length*breadth;
        cout<<"the area of rec is "<<area<<endl;
    }
};
class Square: public Rectangle{
    int side;
    public:
    void getData(){
        cout<<"enter the side of square\n";
        cin>>side;
    }
    void Area(){
        int area2=side*side;
        cout<<"the area of square is "<<area2<<endl;
    }
};
int main(){
    Square obj1;
    Rectangle *ptr;
    ptr=&obj1;
    Rectangle R;
    obj1.getData();
    obj1.Area();
    ptr->getData();
    ptr->Area();
    R.getData();
    R.Area();
}