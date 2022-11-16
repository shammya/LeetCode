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

int area(vector<int> &height, int i, int j)
{
    return (j - i) * min(height[j], height[i]);
}
int maxArea(vector<int> &height)
{
    int ans = 0;
    int i = 0, j = height.size() - 1;
    while (i < j)
    {
        ans = max(ans, area(height, i, j));
        (height[i] > height[j]) ? j-- : i++;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    vector<int> heights({1, 8, 6, 2, 5, 4, 8, 3, 7});
    cout << "max araea : " << maxArea(heights) << endl;
}