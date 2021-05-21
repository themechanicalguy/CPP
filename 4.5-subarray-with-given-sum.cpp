#include <iostream>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int i = 0, j = 0, beg = -1, end = -1, sum = 0;
    while (j < n && sum + A[j] <= s)
    {
        sum += a[j];
        j++;
    }
    if (sum == s)
    {
        cout << i + 1 << " " << j << endl;
    }
    while (j < n)
    {
        sum += A[j];
        while (sum > s)
        {
            sum -= a[i];
            i++;
        }
        if (sum == s)
        {
            beg = i + 1;
            end = j + 1;
            break;
        }
        j++;
        cout << beg << " " << end << endl;
        return 0;
    }
}