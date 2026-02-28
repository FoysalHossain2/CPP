#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int minNum = 0;
    int maxNum = 0;

    for (int i = 0; i < n; i++)
    {
       if (a[i] < a[minNum])
       {
        minNum = i;
       }
       if (a[i] > a[maxNum])
       {
        maxNum = i;
       }
    }

    swap(a[minNum], a[maxNum]);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }


    return 0;
}