#include <iostream>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        if (i == 1)
        {
            cout << "0\n";
            break;
        }
        ll isq = i * i;
        ll total_ways = isq * (isq - 1);
    }
    // res = total - attacking_ways
    return 0;
}