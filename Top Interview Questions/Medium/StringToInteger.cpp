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

int myAtoi(string s)
{
    long long ans = 0;
    bool minus = false, stop = false;
    int i = 0;
    while (s[i] == ' ')
        i++;
    if (s[i] == '-')
        minus = true;
    i++;
    // see("minus ", minus);
    while ((i < s.size()) && (isdigit(s[i])))
    {
        if ((ans > INT_MAX) && !minus)
        {
            // see("hello", 1);
            return INT_MAX;
        }

        if (minus && (-ans < INT_MIN))
        {
            // see("ans ", ans);
            return INT_MIN;
        }
        ans = ans * 10 + (s[i] - '0');
        i++;
        // see("ans", ans);
    }
    // cout << ans << endl;
    if ((ans > INT_MAX) && !minus)
    {
        // see("hello", 1);
        return INT_MAX;
    }

    if (minus && (-ans < INT_MIN))
    {
        // see("ans ", ans);
        return INT_MIN;
    }
    if (minus)
        return -ans;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string s =
        "21474836460";
    cout << myAtoi(s);

    // cout << INT_MIN << endl;
}