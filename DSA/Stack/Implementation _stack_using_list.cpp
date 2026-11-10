#include<bits/stdc++.h>
using namespace std;

class myStack
{

    public:
        list<int> l;

        void push(int val)
        {
            return l.push_back(val);
        }
        void pop()
        {
           return l.pop_back();
        }
        int top()
        {
           return l.back();
        }
        int size()
        {
            return l.size();
        }
        bool empty()
        {
            return l.empty();
        }
};


int main()
{
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.push();
    }
    
    
    return 0;
}