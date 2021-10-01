#include <iostream>
using namespace std;
//program to find multiple missing elememt in unsorted Array
//using Hashing technique

int main()
{
    int A[10] = {7, 3, 4, 9, 12, 6, 1, 11, 2, 10};
    int B[13];
    int h = 12;
    for (int i = 0; i <= h; i++)
    {
        B[i] = 0;
    }

    for (int i = 0; i < 10; i++)
    {
        B[A[i]] = 1;
    }

    for (int i = 0; i <= h; i++)
    {
        if (B[i] == 0)
        {
            cout << "missing element is :" << i << "\n";
        }
    }

    return 0;
}