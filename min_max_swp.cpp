#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    // if (a<b)
    // {
    //     cout << a << endl;
    // }
    // else 
    // {
    //     cout << b << endl;
    // }

    // cout << min({3,5,7,10,12}) << endl;
    // cout << max({233,45,677,899,}) << endl;
    
    // int temp = a;
    // a = b;
    // b = temp;

    swap(a,b);
    cout << a << " " << b << endl;

    return 0;
}