#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    pair<int, string> p;
    //1st way of declaring pair template class
    p = {2, "abcd"};

    /**2nd way of declaring pair template class**/
    //p=make_pair(2,"abc");

    //taking input for pairs
    //cin>>p.first>>p.second;

    /*here p1 stores a copy of p
    pair<int,string> p1 = p;
    p1.first = 3;
    cout << p.first << " " << p.second << endl;
    cout << p1.first << " " << p1.second << endl;
    cout << p.first << " " << p.second << endl;
    */

    /*here we are referencing p using p1
    pair<int,string> &p1 = p;
    p1.first = 3;
    cout << p.first << " " << p.second << endl;
    cout << p1.first << " " << p1.second << endl;
    cout << p.first << " " << p.second << endl;
    return 0; */

    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};
    pair<int, int> p_arr[3];
    p_arr[0] = {1, 2};
    p_arr[1] = {2, 3};
    p_arr[2] = {3, 4};
    for (int i = 0; i < 3; i++)
    {
        cout << p_arr[i].first << " " << p_arr[i].second << endl;
    }
    cout << "After swapping" << endl;
    swap(p_arr[1], p_arr[2]);
    for (int i = 0; i < 3; i++)
    {
        cout << p_arr[i].first << " " << p_arr[i].second << endl;
    }
}
