#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int e= 0, g= 0, y=0, p=0, t=0;

 for (int i = 0; i < s.size(); i++)
{
    char c = tolower(s[i]);  

    if(c == 'e') e++;
    else if (c == 'g') g++;
    else if (c == 'y') y++;
    else if (c == 'p') p++;
    else if (c == 't') t++;
}
    cout << min({e,g,y,p,t}) << endl;

    
    return 0;
}