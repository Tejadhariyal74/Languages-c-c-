#include<iostream>
using namespace std;
class complex{
    int real, imaginary;
    public:
    void set_data(int a,int b){
        real=a;
        imaginary=b;
    }
    void get_data(){
        cout<<"the real part is:"<<real<<endl;
        cout<<"imaginary part is:"<<imaginary<<endl;
    }
};
int main (){
complex c1;
complex *ptr=&c1;
// (*ptr).set_data(2,4);  
// (*ptr).get_data();
// IS SAME AS
ptr->set_data(5,7);
ptr->get_data();
// ARRAY OF OBJECT.
complex *ptr1=new complex[4];
ptr1->set_data(6,8);
ptr1->get_data();
return 0;
}