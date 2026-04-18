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
class Test: virtual public student{
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
class sports: virtual public student{
    protected:
    float score;
    public:
    void set_score(int a){
score=a;
    }
    void get_score(){
        cout<<"your PT score is :"<<score<<endl;
    }
};
class Result :public Test,public sports{
    protected:
float total;
public:
void display_total(){
    total=maths+physics+score;
    get_roll_number();
    get_marks();
    get_score();
    cout<<"yore total score is:"<<total<<endl;
}
};
int main (){
    Result harry;
    harry.set_roll_number(100);
    harry.set_marks(96,95);
    harry.set_score(9);
    harry.display_total();
    return 0;
}