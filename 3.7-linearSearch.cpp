#include <iostream>
using namespace std;

int linearSearch(int A[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, key;
    cin >> n >> key;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << linearSearch(A, n, key) << endl;
    return 0;
}