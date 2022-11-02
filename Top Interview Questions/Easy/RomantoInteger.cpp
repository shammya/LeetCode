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
//  1.assign map to each __cpp_unicode_characters
//  2.scan from left to right and if s[i]<s[i+1] then subtract s[i]value else add s[i] value

int romanToInt(string s)
{
    unordered_map<char, int> map;
    map['I'] = 1;
    map['V'] = 5;
    map['X'] = 10;
    map['L'] = 50;
    map['C'] = 100;
    map['D'] = 500;
    map['M'] = 1000;

    int ans = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (map[s[i]] < map[s[i + 1]])
            ans -= map[s[i]];
        else
            ans += map[s[i]];
    }
    ans += map[s[s.size() - 1]];
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string s = "MCMXCIV";
    cout << "Roman: " << s << " in integer : " << romanToInt(s) << endl;
}