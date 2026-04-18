// DYNAMIC INITIALIZATION OF OBJECT USING CONSTRUCTOR. 
 #include<iostream>
using namespace std;
class bankdeposit{
    int principal;
    int year;
    float interestrate;
    float returnvalue;
     float finalamount;
    public:
    bankdeposit(){};
    bankdeposit(int p,int y,float r);
    bankdeposit(int p,int y,int r);
    void show();
};
    bankdeposit::bankdeposit(int p,int y,float r){
        principal=p;
        year=y;
        interestrate=r;
            returnvalue=(p*r*y);
            finalamount= p+returnvalue;
        
    }
    bankdeposit::  bankdeposit(int p,int y,int R){
    principal=p;
    year=y;
    interestrate= R;
        returnvalue=(p*R*y)/100;
finalamount=p+returnvalue;
}
void bankdeposit::show(){
cout<<"principle amount was"<<principal<<"return value after"<<year<<"years is"<<finalamount<<endl;
}

int main(){
    bankdeposit bd1,bd2;
    int p,y;
    float r;
    int R;
    cout<<"enter the value of p,y and r"<<endl;
    cin>>p>>y>>r;
    bd1=bankdeposit(p,y,r);
    bd1.show();
     cout<<"enter the value of p,y and R"<<endl;
     cin>>p>>y>>R;
     bd2=bankdeposit(p,y,R);
     bd2.show();
    return 0;
}