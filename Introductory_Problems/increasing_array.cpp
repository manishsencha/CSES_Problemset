#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isSorted(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; ++i)
    {
        if (v[i] > v[i + 1])
            return false;
    }
    return true;
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    ll res = 0;
    for (ll i = 0; i < n - 1; ++i)
    {
        if (v[i] > v[i + 1])
        {
            res += v[i] - v[i + 1];
            v[i + 1] += v[i] - v[i + 1];
        }
    }

    cout << res << endl;
    return 0;
}