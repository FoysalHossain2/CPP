#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={1, 2, 3, 2, 5, 2};
    // vector<int> v2;
    // v2 = v; // copy assignment operator
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }

    // v.insert(v.begin(), 10); // insert at the  beginning
    // replace(v.begin(),v.end()-1, 2, 100); // replace all occurrences of 2 with 100
   auto it = find(v.begin(), v.end(), 5);
    if(it==v.end())
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Found";
    }
}