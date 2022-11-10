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

// solution idea
// 1.try out some examples with pen and paper
// 2.we find out if at any stage any number yields 4 then it enters a loop for ever
// 3.we extract digits and take digit square sum and false if it yields 4 at any stage else true

bool isHappy(int n)
{
    int x;
    while (n != 1)
    {
        x = n;
        n = 0;
        while (x)
        {
            n += ((x % 10) * (x % 10));
            x = x / 10;
        }
        // cout << n << endl;
        if (n == 4)
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n = 101;
    cout << n << " is happy : " << isHappy(n);
}