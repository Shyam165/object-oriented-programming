#include<iostream>
using namespace std;
// class sample{
//     int age;
//     int salary;
//     public:
//     sample (int a, int b){
//         age=a;
//         salary=b;
//     }
//     void display();
// };
// void sample:: display(){
//     cout<<"age is "<<age<<"\n and salary is "<<salary;
// }
// int main(){
//     sample s(23,2300);
//     s.display();
// }


// second methode
// class sample{
//     int age;
//     int salary;
//     public:
//     sample (int a, int b);
//    void display(){
//     cout<<"age is "<<age<<"\n and salary is "<<salary;
// }
// };
// sample:: sample (int a, int b){
//         age=a;
//         salary=b;
//     }

// int main(){
//     int a, b;
//     cin>>a>>b;
//     sample s(a,b);
//     s.display();
// }

// class circle{
//     float radius;
//     float pi;
//     public:
//     int area(){
//         return pi*radius*radius;
//     }
//     circle (float r){
//         radius=r;
//         pi=3.14;
//     }
// };

// int main(){
//     float r;
//     cout<<"enter the value of radius of circle: ";
//     cin>>r;
//     circle c(r);
//    float temp= c.area();
//    cout<<"the area of circle is "<<temp;
// }


// int main(){
//     int a,b,c;
//     a=5;
//     b=3;
//     c=2;
//     b=!a;
//     c=!!a;
//     cout<<"now the value of b is "<<b<<"and the value of c is "<<c;

// }

// class test{
//     int num1,b,c;
//     public:
//     test(){
//         num1=23;
//         b=4;
//         c=56;
//         cout<<"constructer is created now \n";
//     }
//     ~test(){
//         cout<<"now destructer is created \n";
//     }
//     void display(){
//         cout<<num1<<endl;
//         cout<<b<<endl;
//         cout<<c<<endl;
//     }
// };
// int main(){
//     test t;
//     t.display();
// }
 

//  class A{
//     private: //this private data mem can be accessible through pub mem func outside the class or any other classes otherwise it will give error 
//     //   if we want to make available for other classes also without using through pub mem func so better to declare protected so this can be only accessible 
//     //             inside sub classes and through public access specifieres it can be access outside the class also
//     int b=12;
//     public:
//     void first(){
//         cout<<"the value of b is "<<b;
//         cout<<"inside class A\n";
//     }
//  };
//  class B{
//     public:
//     void second(){
        
//         cout<<"inside class B\n";
//     }
//  };
//  class C:public A, public B{
//     public:
//     void third(){
        
//         cout<<"inside class C\n";
//     }
//  };
//  int main(){
//     C a;
//     a.third();
//     a.first();
//     a.second();
//  }




/***********This is a program of hybrid inheritance *************/
// class Student{
//    protected:
//    int rollno;
//    char name[50];
//    public:
//    void display(){
//       cout<<"enter the id and name of student \n";
//       cin>>rollno>>name;
      
//    }
//    void studentDetails(){
//       cout<<"the id of student is "<<rollno<<endl;
//       cout<<"the name of student  is "<<name<<endl;
//    }

// };
// class test: public Student{
//    protected:
//     int subjectiveMarks;
//     int objectivemarks;
//     public:
//     void getmarks(){
//       cout<<"enter the subjectivemarks\n";
//       cin>>subjectiveMarks;
//       cout<<"enter the objectivemarks\n";
//       cin>>objectivemarks;
//     }

// };
// class Sports{
//    protected:
//    int sportsmarks;
//    public:
//    void getsportsmarks(){
//       cout<<"enter the sports marks of student\n";
//       cin>>sportsmarks;
//    }
// };
// class Result: public test, public Sports{
//    int total_marks;
//    float avg;
//    public:
//    void displayData(){
//       total_marks=subjectiveMarks+objectivemarks+sportsmarks;
//       avg=total_marks/3;
//      cout<<"the totalmarks of student :- subjective+objective+sport marks is "<<total_marks<<endl;
//      cout<<"the average of totalmarks of student is "<<avg<<endl;
// }
// };
// int main(){
//    Result R;
//    R.display();
//    R.getmarks();
//    R.getsportsmarks();
//    R.studentDetails();
//    R.displayData();

// }


/********************this is the program of function overriding of inheritance***************************/
 
//  class A{
//    protected:
//    int a=9;
//    public:
//   void display(){
//       cout<<"this is inside class B "<<endl;
//    }
//  };
//  class B: public A{
//    public:
//     void display(int b){
//       int c;
//       c=a+b;
//       cout<<"the value of a+b is "<<c<<endl;
//    }
   
//  };
//  int main(){
//    int b;
//    cout<<"enter the value of b\n";
//    cin>>b;
//    B obj;
//    obj.display(b); //here latest function is called only that  is class B as argument is matched with this function , this is the concept of function overriding 
//    //obj.display();
//  }



// int main(){
//   int a;
//   a=-5;
//   cout<<5/2;
// }

class GrandParent {

public:

void  display1() {

cout << "This is grandparent class" << endl;

}

};

class Parent1 : virtual public GrandParent  {

public:

void  display2() {

cout << "This is parent-1 class" << endl;

}

};

class Parent2 : virtual public GrandParent {

public:

void  display3() {

cout << "This is parent-2 class" << endl;

}

};

class Child : public Parent1 ,public Parent2{

public:

void display4() {

cout << "This is child class" << endl;

}

};

int main() {

Child c;

c.display1(); // Error raised

//c.Parent2::display2();
c.display2();

c.display3();

c.display4();

}