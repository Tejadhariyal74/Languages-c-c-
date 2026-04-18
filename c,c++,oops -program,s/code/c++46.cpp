#include<iostream>
using namespace std;
// float func_average(int a,int b){
//     float avg=a+b/2;
//     return avg;
// }
// float func_average2(int a,float b){
//     float avg=a+b/2.0;
//     return avg;
// }
template<class t1,class t2>
float funcaverage( t1 a,  t2 b){
    float avg = (a+b)/2.0;
    return avg;
 }
 template<class t>
void swapp(t &a, t &b){
    int temp= a;
    a=b;
    b=temp;
}
int main(){
float a;
a=funcaverage(4,2);
cout<<"the average of these numbers is:"<<a<<endl;
int x=5,y=3;
swapp(x,y);
cout<<"the value eof x is:"<<x<<endl<<y;
return 0;
}