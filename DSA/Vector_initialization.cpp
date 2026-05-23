#include<bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v; // type 
    // vector<int> v(10); // vector of size n with default values
    vector<int> v(10, -1); 
    vector<int> v2 (v);
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    
    cout << v.size() << endl; 


    return 0;
}