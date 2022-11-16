/********   In the name of Allah, the most gracious, the most merciful ********/
#include <bits/stdc++.h>

using namespace std;
#define pril(a) printf("%d\n", a)
#define pri(a) printf("%d ", a)
#define line printf("\n")
#define space printf(" ")
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t, n, x;
    cin >> t;
    set<int> s;
    for (int c = 1; c <= t; c++)
    {
        cin >> n;
        s.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (s.find(x) != s.end())
                continue;
            else
                s.insert(x);
            if (s.find(-x) != s.end())
            {
                s.erase(-x);
                s.insert(x);
                // cout << "insert" << endl;
            }
        }
        int ans = 0;
        // see("size", s.size());
        for (auto i : s)
            ans += i;
        cout << endl;
        cout << "case " << c << ": " << ans << endl;
    }
}