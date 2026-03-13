#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int math;
    int english;
    Student(string name, int roll, int math, int english)
    {
        // (*this).name = name;
        this->name = name;     // sort cart d refference
        this->roll = roll; 
        this-> math = math;
        this->english = english;
    }
    void total()
    {
        cout << "Total marks of" << name << " = " << math+english << endl ;
    }
};

int main()
{
    Student sakib("Sakib Ahmed", 23, 86, 89);
    sakib.total();
    Student rakib("Rakib Ahmed", 24, 78, 98);
    rakib.total();
    return 0;
}