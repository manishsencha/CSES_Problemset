#include <iostream>
using namespace std;
#define ll long long
int main()
{
    // freopen("test_input.txt", "r", stdin);
    // freopen("test_output.txt", "w", stdout);
    ll t;
    cin >> t;
    for (ll testcase = 0; testcase < t; ++testcase)
    {
        ll y, x;
        cin >> y >> x;
        ll mx = max(x, y);
        ll diagonal_value = 1 + (mx - 1) * mx;
        if (mx % 2 == 0)
            cout << diagonal_value + (y - x) << '\n';
        else
            cout << diagonal_value + (x - y) << '\n';
    }
    return 0;
}

//  1  2  9 10 25 26
//  4  3  8 11 24 27
//  5  6  7 12 23 28
// 16 15 14 13 22 29
// 17 18 19 20 21 30
// 36 35 34 33 32 31