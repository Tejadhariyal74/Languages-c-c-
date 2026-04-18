//  there are two types of header file:
//1. system header files :
#include<iostream>
//2.user define header file: It is written by the programer 
// #include "this.h" //-- this will produce an error if this.h is not present in your  directory.
using namespace std;

int main () {
int a=4 , b=5;
cout<<"hello\n";
cout<<"operator in c++\n";
// Arithmetic operators.

cout<<"the value of a+b is"<<a+b<<endl;
cout<<"the value of a-b is"<<a-b<<endl;
cout<<"the value of a*b is"<<a*b<<endl;
cout<<"the value of a/b is"<<a/b<<endl;
cout<<"the value of a%b is"<<a%b<<endl;
cout<<"the value of a++ is"<<a++<<endl;
cout<<"the value of a-- is"<<a--<<endl;
cout<<"the value of ++a is"<<++a<<endl;
cout<<"the value of --ais"<<--a<<endl;
cout<<"\n";

//Comparison operator.
cout<<"the value of a==b is\n"<<(a==b)<<endl;
cout<<"the value of a!=b is\n"<<(a!=b)<<endl;
cout<<"the value of a<=b is\n"<<(a<=b)<<endl;
cout<<"the value of a>=b is\n"<<(a>=b)<<endl;
cout<<"the value of a>b is\n"<<(a>b)<<endl;
cout<<"the value of a<b is\n"<<(a<b)<<endl;
 // Logical operator.
 cout<<"The value of logical (AND) operator ((a==b) &&(a<b)) is:\n"<<((a==b) &&(a<b))<<endl;
 cout<<"The value of logical (OR)  operator ((a==b) ||(a<b)) is\n:"<<((a==b) ||(a<b))<<endl;
  cout<<"The value of logical (NOT) operator (!(a==b)) is:"<<(!(a==b)) <<endl;
    return 0;
}