#include<iostream>
using namespace std;
template<class T>
class Harry
{
public:
T data;
    Harry(T a) {
        data=a;
    }
 void display(){
 }  
};
template<class T>
void Harry<T> ::display(){
    cout<<data ;
}
void func(int a){
    cout<<"I am Ist func()"<<a<<endl;
}
template <class T>
void func(T a){
    cout<<"I am templatised func()"<<a<<endl;
}

int main(){
Harry <float> h(5.7);
Harry<char> g('c');
Harry<int> f(84);
cout<<h.data<<endl;
h.display();
return 0; 

}