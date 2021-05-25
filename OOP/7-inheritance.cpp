#include <iostream>
using namespace std;

class Base
{
public:
    int a;
    Base(int b = 0)
    {
        a = b;
    }
    void display()
    {
        cout << "Display of Base " << a << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Show of Derived" << endl;
    }
};

int main()
{
    Base b;
    b.display();
    Derived d;
    d.a = 100;
    d.display();
    d.show();
}
