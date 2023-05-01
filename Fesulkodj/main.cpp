#include <iostream>

using namespace std;

void mergeReverse(int A[], int aLength, int B[], int bLength)
{
    int C[aLength + bLength], poz = 0, i = aLength-1, j = bLength-1;
    while(i >= 0 && j >= 0)
    {
        if(A[i] > B[j])
        {
            C[poz++] = A[i--];
        }
        else
        {
            C[poz++] = B[j--];
        }
    }
    while(i >= 0)
    {
        C[poz++] = A[i--];
    }
    while(j >= 0)
    {
        C[poz++] = B[j--];
    }
    for (int k = 0; k < poz; ++k) {
        cout << C[k] << " ";
    }
    cout << endl;
}
void merge(int A[], int aLength, int B[], int bLength)
{
    int C[aLength + bLength], poz = 0, i = 0, j = 0;
    while(i < aLength && j < bLength)
    {
        if(A[i] < B[j])
        {
           C[poz++] = A[i++];
        }
        else
        {
            C[poz++] = B[j++];
        }
    }
    while(i < aLength)
    {
        C[poz++] = A[i++];
    }
    while(j < bLength)
    {
        C[poz++] = B[j++];
    }
    for (int k = 0; k < poz; ++k) {
        cout << C[k] << " ";
    }
    cout << endl;
}

int main() {
    int A[] = {3, 4, 8, 12, 34}, aLength = 5;
    int B[] = {2, 4, 7, 9, 15, 30, 56, 89, 90}, bLength = 9;
    mergeReverse(A, aLength, B, bLength);
    return 0;
}
