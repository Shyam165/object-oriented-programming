 #include<iostream>
 using namespace std;
  class Add{
   int value;
    public:
    void getdata(){
        cout<<"enter the value\n";
        cin>>value;
    }
    void display(){
        cout<<"the value after addition "<<value<<endl;
    }
 Add operator +(Add );
};
  Add Add:: operator +( Add obj){
    Add s3;
   s3.value = value + obj.value;
    return s3;
}
int main(){
    Add S1, S2, S3;
    S1.getdata();
    S2.getdata();
    S3=S1+S2;
    S3.display();
}