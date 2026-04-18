#include <iostream>
using namespace std;
int sum(int a, int b);
void swap_pointer(int *, int *);
// void swap_referencevari(int&,int&);// this is only swapping the no.

int &swap_referencevari(int &, int &); // this is changing the values of actual paramater.
int main()
{
    int x = 5, y = 4;
    sum(x, y);
    cout << "the sum is " << sum(x, y) << endl;

    // swap_pointer(&x,&y);  // this will swap using pointer reference.

    //  swap(x,y); this will swap x and y.
    // swap_referencevari(x,y); // this will swap using reference variable.
    swap_referencevari(x, y) = 700;
    cout << "the value of x is" << x << "and the value of y is" << y << endl;

    // swap(x,y);  this will not swap x and y.because the funx is call after printing x and y.
    return 0;
}
int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}
// this is call by value.
void swap(int a, int b)
{
    int t;
    t = a;
    a = b;
    b = t;
}
// this is swapping with the help of pointer.
void swap_pointer(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
// this is swapping with the help of reference variable.
//  void swap_referencevari (int &a,int &b)
//  {
// int t=a;
// a=b;
// b=t;
//}

int &swap_referencevari(int &a, int &b) // this is returning a referencing variable.
{
    int t = a;
    a = b;
    b = t;
    return a;
}