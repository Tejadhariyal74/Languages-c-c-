#include<iostream>
using namespace std;
// DEFINING STRUCTURE AND USING TYPEDEF.

typedef struct employee 
{
    int eid; 
    char favchar;
    float salary;
}akm;// DECLAREING A STRUCTURE VARIABLE WITHOUT USING struct KEYWORD.

// DEFINING UNION.
union money{
    int money;//2 or 4.
    char van;//1
    float pound;//4
};

// DEFINING ENUM.
int main () {
enum meal{breakfast,lunch,dinner};// THE ARE NEME CONSTANT AND THEIR VALUE IS:0,1,2.
// cout<<lunch<<endl;       //1
// cout<<breakfast<<endl;   //0
// cout<<dinner<<endl;      //2
meal m1=dinner;
cout<<dinner;


// struct employee rohan; // USING struct KERWORD DEFINING VARIABLE.
// rohan.eid=1;
// rohan.favchar='j';
// rohan.salary=1200;
// cout<<"the employee id is"<<rohan.eid<<endl;
// cout<<"the employee favcharacter is"<<rohan.favchar<<endl;
// cout<<"the employee salary is"<<rohan.salary<<endl;

// USING TYPEDEF KEYWORD.
// akm harry;       // making variable without using struct keyword.
// harry.eid=2;
//  harry.favchar='l';
//   harry.salary=120000;
//  cout<<"the employee id is"<<harry.eid<<endl;
//  cout<<"the employee favcharacter is"<<harry.favchar<<endl;
//  cout<<"the employee salary is"<<harry.salary<<endl;
union money c1;
c1.money=5;
// c1.van='2';    // we can use only one variable at a time.
// c1.pound=34.52;
// cout<<"the money is"<<c1.money;
return 0;
}