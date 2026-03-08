#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin.ignore();
    getline(cin, s);

    string newStr = "";

    while (getline(cin, s))
    {
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != ' ') {
                newStr += s[i];
            }
        }
    }
    

    // Sort characters
    sort(newStr.begin(), newStr.end());

    cout << newStr;

    return 0;
}