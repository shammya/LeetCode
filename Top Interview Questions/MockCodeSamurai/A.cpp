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
    string s;
    getline(cin, s);
    vector<int> a, b, c;
    int i = 0;
    while (s[i] != '+' && i < s.size())
    {
        if (isdigit(s[i]))
            a.push_back(s[i] - '0');
        i++;
    }
    while (i < s.size())
    {
        if (isdigit(s[i]))
            b.push_back(s[i] - '0');
        i++;
    }
    // for (int i : a)
    //     cout << i;
    // cout << endl;
    // for (int i : b)
    //     cout << i;
    // cout << endl;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int carry = 0;
    i = 0;
    while (i < a.size() && i < b.size())
    {
        // see("digit", (a[i] + b[i] + carry) % 10);
        c.push_back((a[i] + b[i] + carry) % 10);
        carry = (a[i] + b[i] + carry) / 10;
        i++;
    }
    while (i < a.size())
    {
        // see("digit a", (a[i] + carry) % 10);
        c.push_back((a[i] + carry) % 10);
        carry = (a[i] + carry) / 10;
        i++;
    }
    while (i < b.size())
    {
        // see("digit b", (b[i] + carry) % 10);
        c.push_back((b[i] + carry) % 10);
        carry = (b[i] + carry) / 10;
        i++;
    }
    if (carry)
        c.push_back(carry);
    for (int i = c.size() - 1; i >= 0; i--)
        cout << c[i];
    cout << endl;
}