# object-oriented-programming
//write a c++ program to throw an exception if salary of an employee is either 0 or less than 0 or greater than 200000 rupees
// basic salry , hra , da 

#include<iostream>
using namespace std;
int main(){
    int basic_sal;
    int hra, da;
    int total_sal;
    cout<<" enter the salary  basic_sal, hra , da\n";
    cin>>basic_sal>>hra>>da;
 total_sal=basic_sal+hra+da;
    try{
        if( total_sal <=0 ||total_sal>200000){
            throw total_sal;
        }
        cout<<" the total salary of employee is "<<total_sal<<endl;
    }
    catch(int x){
        cout<<"exception caught\n"<<x<<endl;
    }
}
