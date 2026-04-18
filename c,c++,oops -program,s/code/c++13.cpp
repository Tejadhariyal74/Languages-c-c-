#include <iostream>
using namespace std;
class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void SetData(int a, int b, int c);
    void getData()
    {
        cout << "value of a is:" << a << endl;
        cout << "value of b is:" << b << endl;
        cout << "value of c is:" << c << endl;
        cout << "value of d is:" << d << endl;
        cout << "value of e is:" << e << endl;
    }
};
void Employee::SetData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Employee harry;
    // harry.a=36;  this will throw an error as a is private;
    harry.d = 47;
    harry.e = 43;
    harry.SetData(34, 2, 2);
    harry.getData();
    return 0;
}
