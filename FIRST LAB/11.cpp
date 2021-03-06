#include <iostream>

using namespace std;

bool isPrime(long long n)
{
    if (n == 1)
        return false;
    for (long long i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    long long a;
    cin >> a;
    if (isPrime(a))
    {
        cout << "prime";
    }
    else
    {
        cout << "composite";
    }
}