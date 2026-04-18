// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     // connecting our filr with hout stream.
//     ofstream hout("simple60.txt");
//     // creating a name string and filling it with string entered by user.
//     string name;
//     cout<<"enter your name:";
//     cin>>name;
//     // writing a string to file.
//      hout<<name +"is your name";
//     hout.close();
//     ifstream hin("simple60.txt");
//     string content;
//     hin>>content;
//     cout<<"the content of the file is"<<content;
//     hin.close();
//     return 0;
// }


#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream out;
    out.open("sample.txt");
out<<"this is me\n";
out<<"this is me also ";
out<<"this is also me";
out<<"this is alsi me";
out.close();
ifstream in;
string st,st2;
in.open("sample.txt");
// in>>st>>st2;
// cout<<st<<st2;
while(in.eof()==0){
    getline(in,st);
    cout<<st<<endl;
}
in.close();

return 0;
}