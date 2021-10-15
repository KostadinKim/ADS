#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> class9;
    queue<string> class10;
    queue<string> class11;
    string s;
    while (getline(cin, s))
    {
        if (s.substr(0, 1) == "9")
        {
            class9.push(s);
        }
        if (s.substr(0, 2) == "10")
        {
            class10.push(s);
        }
        if (s.substr(0, 2) == "11")
        {
            class11.push(s);
        }
    }
    while (!class9.empty())
    {
        cout << class9.front() << endl;
        class9.pop();
    }
    while (!class10.empty())
    {
        cout << class10.front() << endl;
        class10.pop();
    }
    while (!class11.empty())
    {
        cout << class11.front() << endl;
        class11.pop();
    }

    return 0;
}