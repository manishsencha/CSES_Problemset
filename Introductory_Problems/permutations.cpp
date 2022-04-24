#include <iostream>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    if (n == 3 || n == 2 || n <= 0)
    {
        cout << "NO SOLUTION\n";
        return 0;
    }

    for (ll i = 1; i <= n; ++i)
    {
        if (i % 2 == 0)
        {
            cout << i << ' ';
        }
    }

    for (ll i = 1; i <= n; ++i)
    {
        if (i % 2 != 0)
        {
            cout << i << ' ';
        }
    }
    cout << endl;
    return 0;
}