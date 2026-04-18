#include<iostream>
#include<fstream>
using namespace std;
int main(){
// connecting our file with hout stream.
ofstream hout("simple60.txt");
// creating a name string and filling it with the string  entered by the user.
string name;
cout<<"enter our name:";
cin>>name;
// writing a string to the file.
hout<<name+"is my name";
hout.close();
ifstream hin("sample60.txt");
string content;
hin>>content;
cout<<"the content of the file is:"<<content;
hin.close();
return 0;
}