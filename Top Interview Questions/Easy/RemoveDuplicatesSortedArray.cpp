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
// 1.i to traverse the array
// 2.k for pointing next non duplicate element position
// 3.num for indicating the previous non duplicate element

int removeDuplicates(vector<int> &nums)
{
    int i = 0, k = 0, val = INT_MIN;
    for (i = 0; i < nums.size(); i++)
    {
        if (nums[i] > val)
        {
            val = nums[i];
            nums[k] = val;
            k++;
        }
    }
    return k;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    vector<int> v({1, 1, 2, 2, 3, 3, 3, 4});
    cout << "distinct numbers : " << removeDuplicates(v) << endl;
    for (int i : v)
        cout << i << " ";
}