// CONSTRUCTOR IN C++

#include <iostream>
using namespace std;
// class complex{
//     int a,b;
//     public:
//     complex(int ,int);// constructor declaration.
//     void printnumber(){
//         cout<<"your no. is:"<<a<<"+"<<b<<"i"<<endl;
//     }
// };
// complex::complex(int x,int y){ // parameterized constructor 
//     a=x;
//     b=y;
// }
// int main(){
//     // IMPLICIT CALL
//     complex a(4,6);
//     // EXPLICIT CALL
//     complex b=complex(5,7);
//     a.printnumber();
//     b.printnumber();
//     return 0;
// }

class point{
    int x,y;
    public:
    point (int a,int b){
        x=a;
        y=b;
    }
    void displaypoint(){
        cout<<"the point is("<<x<<","<<y<<")"<<endl;
    }
};
int main(){
    point p(1,2);
    p.displaypoint();
    point q(2,2);
    q.displaypoint(); 
    return 0;
}