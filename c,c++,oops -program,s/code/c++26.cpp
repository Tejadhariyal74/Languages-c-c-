// DESTRUCTOR IN C++.
// use to release the memory allocated(dynamically and statically)to the construcot and object. 

#include<iostream>
using namespace std;
int count=0;
class num{
    public:
    num(){
        count++;
        cout<<"this is the time when constructor is called for object number"<<count<<endl;
    }
    ~num(){
        cout<<"this is the time when distructor  is called for object number"<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"we are inside main function"<<endl;
    cout<<"creatinf first oject"<<endl;
    num n1; {
 // constructor is called for n1.
 cout<<"entering this block"<<endl;
 cout<<"creating two more object"<<endl;
num n2,n3;  // constructor is called for n3 and n2.
cout<<"exiting this block"<<endl;
// destructor will called for n3 and n2.because n2,n3 are defined for this block. 
    }
    cout<<"back to main program"<<endl;
    // destructor will called for n1.because n1 work is finished. 
return 0;
}