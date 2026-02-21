#include<bits/stdc++.h>
using namespace std;

class student 
{
    public:
    int roll;
    int cls;
    double gpa;

    student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

student fun()
{
    student Karim(2,3,4.00);
    return Karim;
}

int main()
{
    student obj = fun();
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
    return 0;
}