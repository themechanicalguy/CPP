#include <iostream>
using namespace std;
int main()
{
    int A[50];
    int N, pos, key;
    cin >> N >> pos >> key;
    pos = pos - 1;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = N; i >= pos; i--)
    {
        A[i] = A[i - 1];
    }
    A[pos] = key;
    N++;
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}
