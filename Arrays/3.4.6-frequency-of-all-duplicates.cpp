#include <bits/stdc++.h>
using namespace std;
map<int, int> findDuplicates(int A[], int N)
{
    map<int, int> frequency;
    for (int i = 0; i < N; i++)
    {
        frequency[A[i]]++;
    }
    return frequency;
}
int main()
{
    int A[] = {4, 4, 5, 5, 6};
    int N = sizeof(A) / sizeof(A[0]);
    map<int, int> frequency = findDuplicates(A, N);
    for (auto x : frequency)
    {
        if (frequency[x.first] > 1)
            cout << x.first << " --> " << frequency[x.first] << endl;
    }
}
