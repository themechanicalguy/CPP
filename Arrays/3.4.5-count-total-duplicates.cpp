#include <iostream>
using namespace std;
void findRepeat(int A[], int N)
{
    int count = 0;
    int value = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == A[i + 1])
        {
            count++;
            value = A[i];
        }
    }
    count++;
    cout << value << " repeated " << count << endl;
}
int main()
{
    int A[] = {2, 3, 4, 5, 5, 5, 6, 7, 8};
    int N = sizeof(A) / sizeof(A[0]);
    findRepeat(A, N);
    return 0;
}