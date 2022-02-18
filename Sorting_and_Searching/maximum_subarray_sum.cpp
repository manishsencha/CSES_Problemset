#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define rep(i, n) for (i = 0; i < n; ++i)
#define REP(i, k, n) for (i = k; i <= n; ++i)
#define REPR(i, k, n) for (i = k; i >= n; --i)
#define vi vector<int>
#define vll vector<long long int>
#define vs vector<string>
#define vc vector<char>
#define pii pair<int, int>
#define mpair(a, b) make_pair(a, b)
#define pback(a) push_back(a)
#define scan(x) cin >> x
#define scanTwo(x, y) cin >> x >> y
#define print(x) cout << x << " "
#define printn(x) cout << x << "\n"
#define printnTwo(x, y) cout << x << " " << y << "\n"
#define newl cout << "\n"
#define fin freopen("input.txt", "r", stdin)
#define fout freopen("output.txt", "w", stdout)
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)
#define testCases \
    int T;        \
    cin >> T;     \
    while (T--)

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    else if (n % 2 == 0 && n != 2)
        return false;
    else
    {
        for (int i = 3; i * i <= n; i += 2)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
}

template <typename T>
void printList(initializer_list<T> arr)
{
    for (const auto &value : arr)
        cout << value << " ";
    cout << '\n';
}

void test_case()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    ll max_sum = LONG_LONG_MIN, temp_max = 0;
    for (int i = 0; i < n; ++i)
    {
        temp_max += v[i];
        if (temp_max > max_sum)
        {
            max_sum = temp_max;
        }
        if (temp_max < 0)
        {
            temp_max = 0;
        }
    }
    cout << max_sum << '\n';
}

int main()
{
    fastio;
    // fin;
    // fout;
    // testCases
    test_case();
    return 0;
}