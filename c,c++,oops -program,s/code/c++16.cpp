#include<iostream>
using namespace std;
inline int product(int a, int b)  //Inline function hai to static variable .
{
  return a*b;  
}
float getmoney(int money,float factor=1.05)
{
    return money*factor;
}
int main(){
// int a,b;
// cout<<"enter the value of a and b"<<endl;
// cin>>a>>b;
//cout<<"the product of a and b is "<<product(a,b)<<endl;
int money=10000;
cout<<"if you have"<<money<<"Rs in your bank account,you will receive"<<getmoney(money)<<"rs after 1 year"<<endl;
cout<<"FOR VIP:if you have"<<money<<"Rs in your bank account,you will receive"<<getmoney(money,1.2)<<"rs after 1 year"<<endl;
return 0;
}