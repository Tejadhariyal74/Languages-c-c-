#include<iostream>
 using namespace std;
 int c=5;
 int main () {
//     //BUILD in detatype.
// int a,b,c;
// cout<<"enter the value of a"<<endl;
// cin>>a;
// cout<<"enter the value of b"<<endl;
// cin>>b;
// c=a+b;
// cout<<"the sum is"<<c;
cout<<"global variable is"<<::c<<endl;
// }

//float ,double and long souble literals */
/*float d=43.5F;
long double E=43.5L;
cout<<"the size of 43.5 is "<<sizeof (43.5)<<endl;
cout<<"the value of d is "<<d<<endl;
cout<<"the size of 43.5f is "<<sizeof (43.5f)<<endl;
cout<< "the size of 43.5F is "<<sizeof (43.5F)<<endl;
cout<< "the value of E is "<<E<<endl;
cout<< "the size of 43.5l is :"<<sizeof (43.5l)<<endl;
cout<< "the size of 43.5L is: "<<sizeof (43.5L)<<endl;
 }*/
 
 //**TYPE CASTING. */
 int a=5;
 float b=32.5;
 cout<<"the value of a is:"<<(float)a<<endl;
cout<<"the value of a is:"<<float(a)<<endl;
cout<<"the value of b is:"<<(int)b<<endl;
cout<<"the value of b is:"<<int(b)<<endl;
cout<<"the value of b is:"<<b<<endl;
int c= int (b);
cout<<"tne sum of a+c is:"<< a+c<<endl;
cout<<"tne sum of a+b is:"<< a+b<<endl;
cout<<"tne sum of a+int(b) is:"<< a+int(b)<<endl;
return 0;
 }
