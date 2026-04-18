//  CONTINUE AND BREAK STATEMENT.

#include<iostream>
using namespace std;
int main () {
    int i;
    for (int i=1;i<=40;i++)
{
    if(i==2)
    {
        break;
    }
cout<<i<<endl;
}
for(int i=0;i<=40;i++)
{
    if(i==2)
    {
        continue;
    }
    cout<<i<<endl;
}
return 0;
}