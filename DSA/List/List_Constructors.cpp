#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> l(10, 3);
    // for (auto it = l.begin(); it!=l.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // list<int> l = {1,2,3,5,6};
    // list<int> l2 = (l);
    vector<int> v = {10,20,30};
    list<int> l2(v.begin(), v.end());
    for(int val : l2)
    {
        cout << val << endl;
    }

    return 0;
}