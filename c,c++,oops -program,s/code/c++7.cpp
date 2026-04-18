#include<iostream>
using namespace std;
int main() {
    // POINTER IN C++.
    int a=5;
    int*b;
    b=&a;
cout<<"the address of a is"<<&a<<endl;
cout<<"the address of a is"<<b<<endl;
cout<<"the value of a at address b is"<<*b<<endl; // * is dereferencing operetor.

// POINTER TO POINTER.
int **c;
c=&b;
cout<<"the address of b is"<<&b<<endl;
cout<<"the address of b is"<<c<<endl;
cout<<"the value of a at address c is"<<**c<<endl; 
return 0;
    }