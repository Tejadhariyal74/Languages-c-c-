#include<iostream>
#include<vector>
using namespace std;
template<class T>
void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++)
    {
    cout<<v[i]<<" ";
    //cout<<v at(i)<<" "
}
cout<<endl;
}
int main(){
    // way to create a vector.
    vector<int> vec1;  // zero length integer vector
    vector<char> vec2(4);  // four element character vector
//     vec2.push_back('5');
//    //  display(vec2);
 vector<char> vec3(vec2);  // 4 element character vector 
//  display(vec3);
 vector<char> vec4(6,13);  // 6 element of 13
 display(vec4);
int element,size=5;
cout<<"Enter the size of your vector";
cin>>size;
for (int i = 0; i < size; i++)
{
    cout<<"Enter an element to add to this vector:";
    cin>>element;
    vec1.push_back(element);
}
vec1.pop_back();
display(vec1);
vector<int>::iterator iter =vec1.begin();
vec1.insert(iter+1,500,506); // 506 ko 500 bar print kr dega.
display(vec1);
return 0;

}
