#include <iostream>
int sum(int a, int b); // function prototype.
void welcome(void);
using namespace std;
int main()
{
    int a, b;
    cout << "enter a two num:" << endl;
    cin >> a;
    cin >> b;
    // a and b are actual paramater.
    sum(a, b);
    cout << "the sum of the numbers is" << sum(a, b) << endl;
    welcome();
    return 0;
}
int sum(int x, int y) // x and y are formal arguments and taking values from a,b.
{
    int sum;
    sum = x + y;
    return sum;
}
void welcome()
{
    cout << "good by" << endl;
}