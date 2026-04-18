#include<iostream>
using namespace std;
class complex {
    int a;
    int b;
    public :
void setData(int v1,int v2)
{
    a=v1;
    b=v2;
}
void setDatabysum(complex z1,complex z2)
{
    a=z1.a+z2.a;
    b=z1.b+z2.b;
}
void printnumber()
{
    cout<<"your complex number is:"<<a<<"+"<<b<<"i"<<endl;
}
void sumofcomplex () 
{
    cout<<"sum of given complex number is:"<<a<<"+"<<b<<"i"<<endl;
}
};

int main () {
complex c1,c2,c3;
c1.setData(4,5);
c1.printnumber ();

c2.setData(3,2);
c2.printnumber ();

c3.setDatabysum(c1,c2);
c3.sumofcomplex();
return 0;
}