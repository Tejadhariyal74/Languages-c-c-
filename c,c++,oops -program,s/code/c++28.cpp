#include <iostream>
using namespace std;
class base
{
private:
    int data1, data2;

public:
    void setdata()
    {
        data1 = 10;
        data2 = 20;
    }
    int getdata1()
    {
        return data1;
    }
    int getdata2()
    {
        return data2;
    }
};
class derived : public base
{
    int data3;

public:
    void process()
    {
        data3 = getdata1() * getdata2();
    }
    void display()
    {
        cout << "value of data1 is" << getdata1() << endl;
        cout << "value of data1 is" << getdata2() << endl;
        cout << "value of data1 is" << data3 << endl;
    }
};
int main()
{
    derived der;
    der.setdata();
    der.process();
    der.display();
    return 0;
}