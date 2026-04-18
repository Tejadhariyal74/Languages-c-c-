#include<iostream>
#include<math.h>
using namespace std;
class simple_calculator{
    int a,b;
    public:
    void set_simpledata(){
        cout<<"enter the value of a and b:"<<endl;
        cin>>a>>b;
}
void perform_simpleoperation(){
    cout<<"the sum is:"<<a+b<<endl;
    cout<<"the subtraction is:"<<a-b<<endl;
    cout<<"the product is:"<<a*b<<endl;
    cout<<"the division is:"<<a/b<<endl;
}
};
class scientific_calculator{
    int a,b;
    public:
    void set_scientificdata(){
        cout<<"enter the value of a and b:"<<endl;
        cin>>a>>b;
}
void  perform_operation(){
    cout<<"the value of cos(a) is:"<<cos(a)<<endl;
    cout<<"the value of sin(a) is:"<<sin(a)<<endl;
    cout<<"the value of tan(a) is:"<<tan(a)<<endl;
    cout<<"the value of exp(a) is:"<<exp(a)<<endl;
}
};
class hybrid_calculator:public simple_calculator,public scientific_calculator{};
int main (){
    hybrid_calculator cal;
    cal.set_simpledata();
    cal. perform_simpleoperation();
    cal.set_scientificdata();
cal.perform_operation();
return 0;
}