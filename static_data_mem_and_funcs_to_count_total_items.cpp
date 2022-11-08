#include<iostream>
using namespace std;
class Item{
    int item_number;
    int item_price;
    static int count;
    public:
     void getData(){
        cout<<"enter the number of items and prices of items\n";
        cin>>item_number>>item_price;
        count++;
    }
    void display(){
        cout<<"the numbers of item are "<<item_number<<" and the prices of items are "<<item_price<<endl;
    }
    // static mem func cannot use non static data mem
    static void show_items_numbers(){
        cout<<"the numbers of items are "<<count;
    }
};
int Item::count=0;
int main(){
   Item obj;
   obj.getData();
   obj.display();
   obj.getData();
   obj.display();
//    Item:: show_items_numbers(); 
obj.show_items_numbers();

}