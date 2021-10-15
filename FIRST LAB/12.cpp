#include <iostream>
using namespace std;
using ll = long long;
ll lcm(ll m, ll n)
{
    ll a;
    a = (m > n) ? m : n;
    while (true)
    {
        if (a % m == 0 && a % n == 0)
            return a;
        ++a;
    }
}
int main()
{
    ll m, n;
    cin >> m >> n;
    cout << lcm(m, n);
}