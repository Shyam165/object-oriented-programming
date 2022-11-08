 #include<iostream>
 using namespace std;
  class sample{
    int value;
    public:
    void getdata(){
        cout<<"enter the value\n";
        cin>>value;
    }
    void display(){
        cout<<"the value is "<<value<<endl;
    }
 friend void operator -(sample &);
};
void operator -(sample & obj){
    obj.value=-obj.value;//we can also use + sign here 
}
int main(){
    sample S;
    S.getdata();
    cout<<"value before calling opertor overloading\n";
    S.display();
    -S;
    cout<<"value after calling operator overloading \n";
    S.display();
}