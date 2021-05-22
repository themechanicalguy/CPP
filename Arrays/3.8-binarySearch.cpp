#include <iostream>
using namespace std;

int binarySearch(int A[], int n, int key, int l, int h)
{
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (key == A[mid])
        {
            cout << key << "found at" << mid << endl;
            return 0;
        }
        else if (key < A[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, key;
    cin >> n >> key;
    int A[n];
    int sizeA = sizeof(A) / sizeof(A[0]);
    int l = 0;
    int h = sizeA - 1;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << binarySearch(A, n, key, l, h) << endl;
    return 0;
}