#include<iostream>
using namespace std;
class Base1{
    public:
    void greet(){
        cout<<"How are you"<<endl;
    }
};
class Base2{
    public:
    void greet(){
        cout<<"kaise ho"<<endl;
    }
};
class derived:public Base1,public Base2{
    int a;
    public:
    void greet (){
        Base2 :: greet();  // it will define which class function will call.
    }
};
// int main(){
//     Base1 base1obj;
//     base1obj.greet();
//     Base2 base2obj;
//     base2obj.greet();
//     derived d;
//     d.greet();
//     // this is ambiguity.
// }
class B{
    public: 
    void say(){
        cout<<"Hello world"<<endl;
    }
};
class D{
    int a;
    public: 
    void say(){
        cout<<"Hello my friend"<<endl;
    }
};
int main(){
    B b;
    b.say();
    D d;
    d.say();
    return 0;
}
