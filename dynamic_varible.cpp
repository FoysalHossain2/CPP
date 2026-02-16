#include<bits/stdc++.h>
using namespace std;

// int* p;      // static variable
// void fun()
// {
//     int x = 10;
//     p = &x;
//     cout << "Fun -> " << *p << endl;
//     return;
// }

// int main()
// {
//     fun();
//     cout << "Main -> " << *p << endl;
//     return 0;
// }

int* p;      // dynamic variable
void fun()
{
    int* x = new int;
    *x = 10;
    p = x;
    cout << "Fun -> " << *p << endl;
    return;
}

int main()
{
    fun();
    cout << "Main -> " << *p << endl;
    return 0;
}