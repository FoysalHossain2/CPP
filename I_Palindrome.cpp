#include<bits/stdc++.h>
using namespace std;

int main()
{   
    string s;
    cin >> s;

    string rev = s;
    reverse(rev.begin(), rev.end());
    
    if (s == rev)
    {
        cout << "YES" ;
    } else {
        cout << "NO";
    }
    
    return 0;
}