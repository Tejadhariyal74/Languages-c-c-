#include<iostream>
using namespace std;
// FORWARD DECLARATION.
class complex;
class calculator{
    public:
    int add(int a, int b){
        return a+b;
    }
    int sumrealcomplex(complex,complex);
    int sumcompcomplex(complex,complex); 
    friend class complex;
};
class complex{
int a,b;
// // INDIVIDUAL declaring function as friends.
//  friend int calculator::  sumRealcomplex(complex,complex);
//  friend int calculator:: sumcompcomplex(complex,complex);
// Aliter :declaring the entire calculator class as friend.
 friend class calculator;
public:
void setnumber(int n1,int n2){
    a=n1;
    b=n2;
}
void printnumber(){
    cout<<"your number is :"<<a<<"+"<<b<<"i"<<endl;
}
};
int calculator::  sumrealcomplex(complex c1,complex c2){
return(c1.a+c2.a);
}
int calculator:: sumcompcomplex (complex c1,complex c2){
    return(c1.b+c2.b);
    }
    int main (){
        complex c1,c2;
        c1.setnumber(1,2);
        c1.printnumber();
        c2.setnumber(3,4);
       c2.printnumber();
        calculator cal;
        int res=cal.sumrealcomplex(c1,c2);
        cout<<"the sum of real part is :"<<res<<endl;
        int resc=cal.sumcompcomplex(c1,c2);
        cout<<"the sum of complex part is :"<<resc<<endl;
        return 0;
    }