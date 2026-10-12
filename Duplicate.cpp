#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    unordered_set<int> seen;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (seen.find(a[i]) != seen.end())
        {
            cout << "YES" << endl;
            return 0;
        }

        seen.insert(a[i]);
    }

    cout << "NO" << endl;

    return 0;
}