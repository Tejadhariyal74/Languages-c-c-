// LOOP STRUCTURE IN C++.

#include<iostream>
using namespace std;
// int main () {
    //1. FOR LOOP.
//  for(int i =1; i<=40;i++){
//     cout<<i<<endl;
//}
 
// EXAMPLE of infinite for loop.
// for(int i=2; 1<2;i++)
// {
//     cout<<i<<endl;
// } }

//2. WHILE LOOP.
// int i=1;
// while (i<=40)
// {
// cout<<i<<endl;
// i++;
// } }

//3. DO WHILE LOOP.
// int i=1;
// do{
// cout<<i<<endl;
// i++;
// }while(i<=40);
// return 0;
// }

// INITIALIZATION LIST IN CONSTRUCTOR.

class test{
    int a,b;
    public:
    test(int i, int j): a(i),b(j){
        cout<<"constructor executed"<<endl;
        cout<<"the value of a is"<<a<<endl;
        cout<<"the value of b is"<<b<<endl;
        cout<<"the sum of a and b is"<<a+b<<endl;
    }
};
int main(){
    test t(4,6);
    return 0;
}
