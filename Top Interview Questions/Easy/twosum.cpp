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
// 1.put each element into a hashtable
// 2.now for each element check if target-element exists
// 3.cornercases : let ans = x,y
//     3.1. target = 2* x and x = y and both are present -> target=9 array={2,7,3,5}
//     3.2. target = 2*x but x!=y  -> target = 6 array={3,4,2}

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, vector<int>> map;
    int idx = 0;
    for (int i : nums)
    {
        map[i].push_back(idx++);
    }
    idx = 0;
    for (int i : nums)
    {
        // see(i, nums.size())
        if (map.find(target - i) != map.end())
        {
            if (i != target - i)
            {
                // see("if", "");
                cout << idx << " " << map[target - i][0] << endl;
                break;
            }
            else
            {
                if (map[i].size() > 1)
                {
                    // see("else", "");
                    cout << idx << " " << map[i][1] << endl;
                    break;
                }
            }
        }
        idx++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> nums({2, 7, 11, 15});
    int target = 9;

    twoSum(nums, target);
}
