#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<char> st;
    string s;
    cin >> s;
    int open = 0;
    int close = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
            open++;
        }
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            close++;
            if (close > open)
            {
                cout << "no" << endl;
                return 0;
            }

            else if (s[i] == ')' && !st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else if (s[i] == '}' && !st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else if (s[i] == ']' && !st.empty() && st.top() == '[')
            {
                st.pop();
            }
            else if (st.empty())
            {
                cout << "no" << endl;
                return 0;
            }
        }
    }
    if (st.empty())
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}