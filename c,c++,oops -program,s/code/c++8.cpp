#include<iostream>
using namespace std;
int main () {
    int marks[]={21,25,35,56};
//     int mathsmarks[]={112,125,175,514};
//     cout <<"these are maths marks"<<endl;
//     cout<<mathsmarks[0]<<endl;
// cout<<mathsmarks[1]<<endl;
// cout<<mathsmarks[2]<<endl;
// cout<<mathsmarks[3]<<endl;
// //YOU CAN CHANGE THE VALUE OF AN ARRAY.
//  cout <<"these are maths marks"<<endl;
// mathsmarks[2]=455;
// cout<<mathsmarks[0]<<endl;
// cout<<mathsmarks[1]<<endl;
// cout<<mathsmarks[2]<<endl;
// cout<<mathsmarks[3]<<endl;
// // WITH THE HELP OF LOOPS.
// for (int i=0;i<=3;i++)
// {
//     cout<<"the value of marks is"<<marks[i]<<endl; 
// }

//POINTER AND ARRAY
int *p=marks;
// cout<<*(++p)<<endl;
// cout<<*(p++)<<endl;
// cout<<*(++p)<<endl;
cout<<"the value of *p is "<<*p<<endl;
cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
cout<<"the value of *(p+3) is "<<*(p+3)<<endl;
return 0;
}