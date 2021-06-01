#include <iostream>
using namespace std;

int main()
{
    /*int a = [](int x, int y) -> int
    { return x + y; }(10, 30);
    cout<<a;*/

    int a = 10;
    auto f = [&a]()
    { cout << a << endl; };
    f();
    a++;
    f();
}
