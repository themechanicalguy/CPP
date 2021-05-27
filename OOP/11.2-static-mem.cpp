#include <iostream>
using namespace std;

class Innova
{
public:
    static int price;
    static int getPrice()
    {
        return price;
    }
};
int Innova::price = 20;
int main()
{
    Innova inv1, inv2;
    cout << inv1.price << endl;
    cout << inv2.price;
}
