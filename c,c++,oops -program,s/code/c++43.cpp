// USE OF TEMPLETS :AS A VARIABLE;

#include<iostream>
using namespace std;
template<class T>
class vector{
public:
T  *arr;
int size;
vector (int m){
size=m;
// arr=new int [size];
arr= new T [size];
}
T dot_product(vector &v){
T d=0;
for(int i=0;i<size;i++){
d+= arr[i] * v.arr[i];
}
return d;
}
};
int main(){
    vector <float> v1(3);
  //   vector <int> v1(3);
// vector v1(3);
v1.arr[0]=4.5;
v1.arr[1]=3;
v1.arr[2]=1.2;
  vector <float> v2(3);
// // vector v2(3);
v2.arr[0]=1;
v2.arr[1]=0;
v2.arr[2]=2;
float a= v1.dot_product(v2);
cout<<a<<endl;
return 0;

}