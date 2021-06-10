// Find a element in a vector
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr{4, 3, 5, 2, 6, 1};
    auto it = find(arr.begin(), arr.end(), 9);

    if (it == arr.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }
    return 0;
}
