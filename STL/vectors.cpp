#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printVec(vector<int> v)
{
    cout << "Size " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[10];
    vector<int> v;
    cout << "Enter Size of Vector " << endl;
    int n;
    cin >> n;
    cout << "Enter Elements of vector" << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        printVec(v);
    }
}
