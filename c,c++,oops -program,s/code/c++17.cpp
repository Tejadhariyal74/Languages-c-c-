#include <iostream>
using namespace std;
int sum(int a, float b)
{
    int sum = a + b;
    cout << "using function with two arguments sum is:" << endl;
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << "the sum using function with three arguments is:" << endl;
    return a + b + c;
}
// Calculate the volume of cylinder.
int volume(int r, int h)
{
    cout << "the volume of cylinder is " << endl;
    return (3.14 * r * r * h);
}
// Calculate the volume of cube.
int volume(int a)
{
    cout << "the volume of cube is :" << endl;
    return (a * a * a);
}
// Calcute the volume of cuboid.
int volume(int l, int b, int h)
{
    cout << "the volume of cuboide is:" << endl;
    return (l * b * h);
}

int main()
{
    cout << "sum of 5 and 4 is" << sum(5, 4) << endl;
    cout << "sum of 4,5 and 6 is:" << sum(4, 5, 6) << endl;
    cout << "the volume of cuboide of 3,3,4 parameters is" << volume(3, 3, 4) << endl;
    cout << "the volume of cube of side 5 is " << volume(5) << endl;
    cout << "the volume of cylinder of radius 5 and height 7 is" << volume(5, 7) << endl;
    return 0;
}