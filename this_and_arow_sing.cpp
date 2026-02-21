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

int main()
{
    
    student Rahim(45, 5, 3.5);
    
    student karim(3, 5, 5.6);

    cout << Rahim.roll << " " << Rahim.gpa << endl;
    cout << karim.roll << " " << karim.gpa << endl;
    return 0;
}