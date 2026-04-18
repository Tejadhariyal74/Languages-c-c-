// TEMPLATES WITH MULTIPLE PARAMATERS.(tampletes make varable data type)

#include<iostream>
using namespace std;
template<class T1, class T2>
class my_class{
public:
T1 data1;
T2 data2;
my_class(T1 a,T2 b){
    data1=a;
    data2=b;
}
void display(){
    cout<<"value of data1 is:"<<data1<<" and value of data2 is:"<<data2<<endl;
}
};
int main(){
my_class<int,char>obj(1,'c');
obj.display();
// my_class<int,float> obj( 1, 5.2);
//  obj.display();
return 0;
}