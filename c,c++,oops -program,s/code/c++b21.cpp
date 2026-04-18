#include<iostream>
using namespace std;
class c2;
class c1{
    int value1;
    friend void exchange(c1&,c2&);
public:
void data(int a){
    value1=a;
}
void display(void){
cout<<value1<<endl;
}
};
class c2{
    int value2;
    friend void exchange(c1 &,c2 &);
public:
void data(int a){
    value2=a;
}
void display(void){
cout<<value2<<endl;
}
};
void exchange(c1 &x,c2 &y){
int t=x.value1;
x.value1=y.value2;
y.value2=t;
}
int main(){
    c1 oc1;
c2 oc2;
oc1.data(34);
oc2.data(67);
exchange(oc1,oc2);
cout<<"the value of c1 after exchange becomes:";
oc1.display();
cout<<"the value of c2 after exchange becomes:";
oc2.display();
return 0;
}