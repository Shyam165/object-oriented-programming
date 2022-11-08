#include<iostream>
using namespace std;
class Student{
    int id;
    char name[30];
  static int count;
    public:
    void getInput(){
        cout<<"enter the id and name of student\n";
        cin>>id>>name;
        count++;
    }
    void display(){
        cout<<"id of student is "<<id<<" and name of student is "<< name<<endl;
    }
    void number_of_students(){
        cout<<" the number of students is "<<count<<endl;
        
    }
};
 int Student:: count=0;
 int main(){

        Student S1;
        S1.getInput();
        S1.display();
        Student S2;
        S2.getInput();
        S2.display();
         Student S3;
         S3.getInput();
         S3.display();
         S3.number_of_students();


 }