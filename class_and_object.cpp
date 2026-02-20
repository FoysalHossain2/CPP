#include<bits/stdc++.h>
using namespace std;

class student 
{
    public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    student a, b;
    cin.getline(a.name, 100);
    cin >> a.name >> a.roll >> a.gpa;
    cin.ignore();
    //getchar();
    cin.getline(b.name, 100);
    cin >> b.name >> b.roll >> b.gpa;
    

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;
}