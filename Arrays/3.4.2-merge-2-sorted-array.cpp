#include <iostream>
using namespace std;
void mergeArray(int A1[], int A2[], int N1, int N2, int A3[])
{
    int i = 0, j = 0, k = 0;
    while (i < N1 and j < N2)
    {
        if (A1[i] < A2[j])
        {
            A3[k++] = A1[i++];
        }
        else
        {
            A3[k++] = A2[j++];
        }
    }
    while (i < N1)
    {
        A3[k++] = A1[i++];
    }
    while (j < N2)
    {
        A3[k++] = A2[j++];
    }
}

int main()
{
    int A1[] = {1, 3, 5, 7};
    int N1 = sizeof(A1) / sizeof(A1[0]);
    int A2[] = {2, 4, 6, 8};
    int N2 = sizeof(A2) / sizeof(A2[0]);
    int A3[N1 + N2];
    mergeArray(A1, A2, N1, N2, A3);
    cout << "After merging array " << endl;
    for (int i = 0; i < N1 + N2; i++)
    {
        cout << A3[i] << " ";
    }
    return 0;
}
