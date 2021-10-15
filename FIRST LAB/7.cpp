#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> dq, dq1;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char x;
        int m;
        cin >> x;
        if (x == '+')
        {
            cin >> m;
            dq1.push_back(m);
        }
        if (x == '-')
        {
            cout << dq.front() << endl;
            dq.pop_front();
        }
        if (x == '*')
        {
            cin >> m;
            dq1.push_front(m);
        }
        if (dq1.size() > dq.size())
        {
            dq.push_back(dq1.front());
            dq1.pop_front();
        }
    }

    return 0;
}