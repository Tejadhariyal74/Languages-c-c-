//1.SELECTION STRUCTURE.

#include<iostream>
using namespace std;
int main () {
    int age; 
    cout<<"tell me your age"<<endl;
    cin>>age;
    //1.SELECTION STRUCTURE.

    // if (age<=18 && age> 10)
    // {
    // cout<<"you can come on party"<<endl;
    // }
    //  else if (age<10 && age>=5)
    // {
    // cout<<"you can come not on party"<<endl;
    // }
    //    else if (age<5 && age>=1 )
    // {
    // cout<<"you are a kid"<<endl;
    // } 
    //    else if ( age<1 )
    // {
    // cout<<"you are not born"<<endl;
    // } 

//2.SELECTION CONT. STREUCTION("SWITCH CASE").
switch (age)
{
case 18:
cout<<"you are 18"<<endl;

case 9 :
cout<<"you are runner"<<endl;

case 15:
cout<<"you are not strong"<<endl;
case 10:
cout<<"you are kid"<<endl;
}
return 0;
}