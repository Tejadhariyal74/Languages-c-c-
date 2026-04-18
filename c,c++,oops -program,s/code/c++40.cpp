#include<iostream>
#include<fstream>
using namespace std;
int main(){
string st="Harry Bhai";
string st2;
// OPENING FILE USING CONSTRUCTOR.AND WRITING IT.
ofstream out("sample.txt");
// WRITE OPERATION.
cout<<st;
// OPENING FILES USING CONSTRUCTOR. AND READ IT.
 fstream in("simple.txt");
// READ OPERATION
 in>>st2;
getline(in,st2); // string input leta hai!
cout<<st2;
return 0;
}