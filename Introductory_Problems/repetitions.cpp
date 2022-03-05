#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int c = 1, res = 1;
    char comp = s[0];
    for (int i = 1; i < (int)s.length(); ++i)
    {
        if (comp == s[i])
        {
            c++;
        }
        else
        {
            res = max(c, res);
            c = 1;
            comp = s[i];
        }
    }
    res = max(c, res);
    cout << res << '\n';
    return 0;
}