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
    student a;
    a.roll = 101;
    a.gpa = 3.75;
    char temp[] = "John Doe";
    strcpy(a.name, temp);

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
}