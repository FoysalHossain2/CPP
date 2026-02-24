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

    int minNum = a[0];

    for (int i = 0; i < n; i++)
    {
       if (a[i] < minNum)
       {
         minNum = a[i];
       }
    }

    int frequency = 0;

    for (int i = 0; i < n; i++)
    {
       if (a[i] == minNum)
       {
         frequency++;
       }
    }

    if (frequency % 2 == 1 )
    {
        cout << "Lucky";
    }
    else {
        cout << "Unlucky";
    }
    
    return 0;
}