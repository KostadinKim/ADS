#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> first;
    queue<int> second;
    int fcnt = 0;
    int scnt = 0;
    for (int i = 0; i < 5; i++)
    {
        int n;
        cin >> n;
        first.push(n);
    }

    for (int i = 0; i < 5; i++)
    {
        int m;
        cin >> m;
        second.push(m);
    }
    while (!first.empty() && !second.empty())
    {
        int a = first.front();
        int b = second.front();
        first.pop();
        second.pop();
        if (a == 0 && b == 9)
        {

            first.push(a);
            second.push(b);
            fcnt++;
        }
        else if (b == 0 && a == 9)
        {

            first.push(a);
            second.push(b);
            scnt++;
        }
        else if (a > b)
        {

            first.push(a);
            second.push(b);
            fcnt += 1;
        }
        else if (a < b)
        {

            first.push(a);
            second.push(b);
            scnt += 1;
        }
    }
    if (fcnt > scnt)
    {
        cout << "first " << fcnt;
    }
    int cnt = fcnt + scnt;
    if (cnt > 1000000)
    {
        cout << "botva" << endl;
    }
    if (scnt > fcnt)
    {
        cout << "second " << scnt;
    }

    return 0;
}