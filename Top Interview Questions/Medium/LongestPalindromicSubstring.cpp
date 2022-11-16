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

// int palindrome(string s, int i, int j)
// {
//     while (i >= 0 && j < s.size() && s[i] == s[j])
//     {
//         i--;
//         j++;
//     }
//     return j - i - 1;
// }
int palindrome(string s, int i, int j)
{
    if (i < 0 || j >= s.size())
        return 0;
    if (s[i] != s[j])
        return 0;
    return palindrome(s, i - 1, j + 1) + 2;
}
string longestPalindrome(string s)
{
    int len = 0, len1, len2;
    int idx = 0;
    for (int i = 0; i < s.size(); i++)
    {
        len1 = palindrome(s, i, i) - 1;
        len2 = palindrome(s, i, i + 1);
        if (len1 > len)
        {
            len = len1;
            idx = i - (len - 1) / 2;
        }
        if (len2 > len)
        {
            len = len2;
            idx = i - (len - 1) / 2;
        }
    }
    return s.substr(idx, len);
}

int reverse(int x)
{
    int ans = 0, limit = INT_MAX / 2;
    int sign = (x < 0);
    // see("sign", sign);
    // x = abs(x);

    while (x)
    {
        ans = (ans * 10) + x % 10;
        if (ans > limit)
            return 0;
        x = x / 10;
    }
    // if (sign)
    //     return -1 * ans;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // cout << " longest palindrome : " << longestPalindrome(s) << endl;
    cout << reverse(123) << endl;
    cout << INT_MIN << endl;
}