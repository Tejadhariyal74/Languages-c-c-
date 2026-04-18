#include<iostream>
using namespace std;
class y;
class x{
    public:
    int data;
    void setvalue(int value){
        data=value;
    }
    friend void add(x,y);
};
class y{
    int num;
    friend void add(x,y);
    public:
    void setvalue(int value){
        num=value;
    }
};
void add(x o1,y o2){
    cout<<"summing data of x and y object gives me:"<<o1.data+o2.num<<endl;;
}
int main (){
    x a1;
    a1.setvalue(2);
    y a2;
    a2.setvalue(3);
    add(a1,a2);
    return 0;  

}