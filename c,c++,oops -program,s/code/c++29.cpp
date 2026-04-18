#include<iostream>
using namespace std;
class student{
    protected:
    int roll_number;
    public:
    void set_roll_number(int r){
        roll_number=r;
    }
    void get_roll_number(){
        cout<<"the rollnumber is:"<<roll_number<<endl;
    }
};
class exam:public student{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float a, float b){
        maths=a;
        physics=b;
    }
    void get_marks(){
        cout<<"maths marks is:"<<maths<<endl;
        cout<<"physics marks is:"<<physics<<endl;
    }
};
class result:public exam{
public:
void display_result(){
get_roll_number();
get_marks();
cout<<"your percentage are:"<<(maths+physics)/2<<"%"<<endl;
}
};
int main(){
result harry;
harry.set_roll_number(400);
harry.set_marks(96,95);
harry.display_result();
return 0;
}