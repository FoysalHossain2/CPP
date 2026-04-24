#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    string sc;
    int ID;
};


int main()
{
 
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].sc >> a[i].ID;
    }

    string sce[n];
    for (int i = 0; i < n; i++)
    {
        sce[i] = a[i].sc;
    }
    reverse(sce, sce + n);
    
    for (int i = 0; i < n; i++)
    {
        a[i].sc = sce[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].sc << " " << a[i].ID << endl;
    }
    
    
    return 0;
}