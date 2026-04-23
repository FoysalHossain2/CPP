#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student 1, Student r)
{
    if (l.marks < r.marks)
    {
        return true;
    }
    else 
    {
        return false;
    }
    
}


int main()
{
    // int a[5];
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    sort(a, a+n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    } 
    cout << mn << endl;

    return 0;
}