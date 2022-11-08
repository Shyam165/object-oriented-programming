 #include<iostream>
 using namespace std;
  class sample{
    int real;
    int imag;
    public:
    void getdata(){
        cout<<"enter the real and imag\n";
        cin>>real>>imag;
    }
    void display(){
        cout<<real<<" + "<<imag<<endl;
    }
 friend sample operator +(sample , sample );
};
  sample operator +(sample s1, sample s2){
    sample s3;
    s3.real= s1.real+ s2.real; 
    s3.imag= s1.imag + s2.imag;
    return s3;
}
int main(){
    sample S1, S2, S3;
    S1.getdata();
    S2.getdata();
    S3=S1+S2;
    S3.display();
}