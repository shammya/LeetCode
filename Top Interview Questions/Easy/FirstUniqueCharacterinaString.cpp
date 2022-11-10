/********   In the name of Allah, the most gracious, the most merciful ********/
#include <bits/stdc++.h>

using namespace std;
#define line         \
    {                \
        cout << endl \
    }
#define space       \
    {               \
        cout << " " \
    }
#define see(a, b)                        \
    {                                    \
        cout << a << " : " << b << endl; \
    }
const double pi = acos(-1.0);
typedef long int int32;
typedef long long int lli;
typedef unsigned long long int ulli;
#define fi first
#define se second
typedef pair<int, int> PII;
const double eps = 1e-9;
int MOD = 1e9 + 7;

int Set(int N, int pos) { return N = N | (1 << pos); }
int Reset(int N, int pos) { return N = N & ~(1 << pos); }
bool Check(int N, int pos) { return (bool)(N & (1 << pos)); }

/****************  TEMPLATE  ********************/

int firstUniqChar(string s)
{
    int idx = s.size();
    pair<int, int> table[26];
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (table[s[i] - 'a'].first == 0)
            table[s[i] - 'a'].second = i;
        table[s[i] - 'a'].first++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (table[i].first == 1)
            idx = min(idx, table[i].second);
    }
    if (idx == s.size())
        return -1;
    return idx;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
}