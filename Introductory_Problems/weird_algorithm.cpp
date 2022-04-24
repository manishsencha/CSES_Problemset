#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);
    ll n;
    cin >> n;
    vector<ll> v;
    while (n != 1)
    {
        v.push_back(n);
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = (3 * n) + 1;
        }
    }
    v.push_back(n);
    for (auto i : v)
    {
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}