#include <bits/stdc++.h>
#define MOD (ll)10e9 + 7
#define ll long long
using namespace std;

ll calculate_combinations(ll n)
{
    vector<ll> dp(n + 1, 0);
    dp[0] = 1;
    for (ll i = 1; i <= n; ++i)
    {
        for (ll j = 1; j <= 6; ++j)
        {
            if ((i - j) >= 0)
            {
                dp[i] += dp[i - j];
            }
        }
    }
    return dp[n];
}
int main()
{
    ll n;
    cin >> n;
    ll res = calculate_combinations(n);
    cout << res << endl;
    return 0;
}