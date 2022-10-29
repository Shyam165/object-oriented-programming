// write a prg to define classes as base class student contains id, name 
// , and marks of attendence and a drived class test1 derived form std contains objective and 
// descriptive marks , a derived class test 2 derive from student contians objective and descriptive marks ,
//  a derived class result derived  from test 1 and test 2 which find the total
//  of best two objectie marks and best of descriptive marks and attendence marks.
#include<iostream>
#include<stdlib.h>
using namespace std;
class Student{
    protected:
    int id;
    char name[30];
   int attendence_marks;
   public:
   void getData(){
    cout<<"enter the id , name and attendence marks of student\n";
    cin>>id>>name>>attendence_marks;
   }
};
class Test1: virtual public Student{
    protected:
    int objective_marks;
    int descriptive_marks;
    public:
    void getData1(){
    cout<<"enter the objective marks and descriptive marks of student\n";
    cin>>objective_marks>>descriptive_marks;
}
};
class Test2: public virtual Student{
   protected:
   int objective_marks1;
   int descriptive_marks2;
   public:
   void getData2(){
    cout<<"enter the objective marks and descriptive marks of student\n";
    cin>>objective_marks1>>descriptive_marks2;
}
};
class result: public Test1, public Test2{
    protected:
    int totalmarks;
    int m1;
    int m2;
   public:
   void total_marks(){
    m1=max(objective_marks, objective_marks1);
    m2=max(descriptive_marks, descriptive_marks2);
    totalmarks= m1+m2+attendence_marks;
    cout<<"the total marks of student is "<<totalmarks;
   }
};
int main(){
    result obj1;
    obj1.getData();
    obj1.getData1();
    obj1.getData2();
    obj1.total_marks();
}