#include<iostream>
#include<string>
using namespace std;
class binary{
    private:
    string s;
    void chk_bin(void);
    public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};
void binary:: read(void){
cout<<"Enter a binary number:";
cin>>s;
}
void binary:: chk_bin(void){
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!= '0' &&s.at(i)!='1')
        {
cout<<"incorrect binary format"<<endl;
exit (0);
        }
    }
}
void binary:: ones_compliment(void){
      chk_bin(); // nesting of member functions.
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='1')
        {
            s.at(i)='0';
        }
        else{
            s.at(i)='1';
        }
    }
}
void binary:: display(void){
    cout<<"Displaying your binary no."<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}
int main(){
    binary b;
    b.read();
    // b.chk_bin();  //can not access private member.
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}