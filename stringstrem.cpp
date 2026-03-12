#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    cout << s << endl;
    stringstream dd(s);
    string word;
    while (dd >> word)
    {
        cout << word << endl;
    }
    
    
    return 0;
}