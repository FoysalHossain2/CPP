#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    // vector<int> v(n);  if we know the size of the vector beforehand, we can initialize it with that size
    vector<int> v;   //or we can initialize an empty vector and then push_back elements into it
    for (int i = 0; i < n; i++){
        int x;
            cin >> x;
            v.push_back(x);
    }

    for (int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    

    return 0;
}