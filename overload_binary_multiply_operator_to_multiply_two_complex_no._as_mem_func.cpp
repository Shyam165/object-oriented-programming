#include<iostream>
using namespace std;
class Multiplication{
    int real;
    int imag;
    public:
    void getData(){
        cout<<"enter the real and imag"<<endl;
        cin>>real>>imag;
    }
    void display(){
        cout<<real<<" + "<<imag<<endl;
    }
    Multiplication operator *(Multiplication);
};
Multiplication Multiplication:: operator *(Multiplication M2){
    Multiplication M3;
    M3.real=(real*M2.real)-(imag*M2.imag);
    M3.imag=(real*M2.imag)+(imag*M2.real);
    return M3;
}
int  main(){
    Multiplication M1, M2, M3;
    M1.getData();
    M2.getData();
    M3=M1*M2;
    M3.display();
}