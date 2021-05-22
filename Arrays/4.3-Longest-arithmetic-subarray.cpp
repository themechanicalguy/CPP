#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int ans = 2;
    int pd = A[1] - A[0];
    int j = 2;
    int cur = 2;
    while (j < n)
    {
        if (pd == A[j] - A[j - 1])
        {
            cur++;
        }
        else
        {
            pd = A[j] - A[j - 1];
            cur = 2;
        }
        ans = max(ans, cur);
        j++;
    }
    cout << ans << endl;
    return 0;
}
