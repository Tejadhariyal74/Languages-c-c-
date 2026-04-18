#include<iostream>
using namespace std;
class base1{
    protected:
    int base1;
    public:
    void set_base1(int a){
base1=a;
    }
};
class base2{
    protected:
    int base2;
    public:
    void set_base2(int a){
base2=a;
    }
};
class base3{
    protected:
    int base3;
    public:
    void set_base3(int a){
base3=a;
    }
};
class derived:public base1,public base2,public base3{
    public:
    void show_deta (){
cout<<"the value of base1is:"<<base1<<endl;
cout<<"the value of base2 is:"<<base2<<endl;
cout<<"the value of base3 is:"<<base3<<endl;
cout<<"the sum is:"<<base1+base2+base3<<endl;
    }
};
int main(){
derived harry;
harry.set_base1(40);
harry.set_base2(30);
harry.set_base3(50);
harry.show_deta();
return 0;
}