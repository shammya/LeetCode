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

int rabin_karp(string s, string t)
{
    const int p = 31;
    const int m = 1e9 + 9;
    int S = s.size(), T = t.size();
    vector<long long> p_pow(max(T, S));
    p_pow[0] = 1;
    for (int i = 1; i < p_pow.size(); i++)
        p_pow[i] = (p_pow[i - 1] * p) % m;
    vector<long long> h(T + 1, 0);
    for (int i = 0; i < T; i++)
        h[i + 1] = (h[i] + (t[i] - 'a' + 1) * p_pow[i]) % m; // ith character is mapped to i+1 th index
    long long hs = 0;
    for (int i = 0; i < S; i++)
        hs = (hs + (s[i] - 'a' + 1) * p_pow[i]) % m;

    long long curhs = 0;
    for (int i = 0; i + S - 1 < T; i++)
    {
        curhs = (h[i + S] - h[i] + m) % m;
        if (curhs == (hs * p_pow[i]) % m)
            return i;
    }
    return -1;
}

int strStr(string haystack, string needle)
{
    return rabin_karp(needle, haystack);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string needle = "leet";
    string haystack = "asdfleetcode";
    cout << "first occurence at  : " << strStr(haystack, needle);
}