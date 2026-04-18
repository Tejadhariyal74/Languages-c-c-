// CONSTRUCTOR OVERLOADING IN C++.
#include<iostream>
using namespace std;
// class complex{
//     int a,b;
//     public:
//     complex(){  // default constructor.
// a=0;
// b=0;
//     }
//     complex(int x, int y){ // parameterized.
//         a=x;
//         b=y;
//     }
//     complex (int x){
//         a=x;
//         b=0;
//     }
//     void printnumber(){
//         cout<<"your number is:"<<a<<"+"<<b<<"i"<<endl;
//     }
// };
// int main(){
//     complex c(4,6);
//     c.printnumber();
//     complex c2(6);
//     c2.printnumber();
//     complex c3;
//     c3.printnumber();
//     return 0;
// }

// CONSTRUCTOR WIITH DEFAULT ARGUMENT.
class simple{
    int data1, data2, data3;
    public:
    simple(int a,int b=8,int c=9){
        data1=a;
        data2=b;
        data3=c;
    }
    void printdata(){
        cout<<"the value of data1,data2,data3 is:"<<data1<<","<<"and"<<data2<<","
<<data3<<endl;    }
};
int main(){
    simple s(12,13);
    s.printdata();
    simple d(1);
    d.printdata();
    return 0;
}
