#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    vector<int> v(n - 1);
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 1; ++i)
    {
        if (v[i] != i + 1)
        {
            cout << i + 1 << '\n';
            return 0;
        }
    }
    cout << n << '\n';
    return 0;
}