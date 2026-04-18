#include<iostream>
using namespace std;
class number{
    int a;
    public:
    number(){
        a=0;
    }
    number(int num){
        a=num;    
    }
    number(number &obj){
        cout<<"copy constructor is callled:"<<endl;
        a=obj.a;
    }
    void display(){
        cout<<"the number for this object is:"<<a<<endl;
    }
};
int main(){
    number x,y,z(42),z2;
        x.display();
        y.display();
        z.display();
        number z1(z2);  // copy constructor is called because z1 takes reference of object.
z1.display();
z2=z; // copy constructor not called.
z2.display();
number z3=z;  // copy constructor is called because z1 takes reference of object.
z3.display();
return 0;
}