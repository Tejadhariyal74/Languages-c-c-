#include<iostream>
using namespace std;
class employee {
    public:
    int id;
    float salary; 
    employee (int impid){
        id=impid;
        salary=340;
    }
    employee(){};
};
class programmer : public employee{
    public:
int languagecode ;
programmer(int impid){
    languagecode=9;}
    void getdata(){
        cout<<id<<endl;
}};
int main(){
    employee harry(1),roshan(2);
    cout<<harry.salary<<endl;
    cout<<roshan.salary<<endl;
    cout<<harry.id<<endl;
    programmer skillf(10);
    cout<<skillf.languagecode<<endl;
    //cout<<skillf.id<<endl;
    // skillf.getdata();
    return 0;
}