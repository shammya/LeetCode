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

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    int j = 0, k = 0, target, sum, given = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        j = i + 1;
        k = nums.size() - 1;
        target = given - nums[i];
        while (j < k)
        {
            sum = nums[j] + nums[k];
            if (sum < target)
                j++;
            else if (sum > target)
                k--;
            else
            {
                ans.push_back(vector<int>({nums[i], nums[j], nums[k]}));

                do
                {
                    j++;
                } while ((j < k) && (nums[j] == nums[j - 1]));

                do
                {
                    k--;
                } while ((j < k) && (nums[k] == nums[k + 1]));
            }
        }
        while ((i + 1 < nums.size()) && (nums[i] == nums[i + 1]))
            i++;
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

    vector<int> v({{1, 0, -1}});

    vector<int> a({-1, 0, 1, 2, -1, -4});
    // vector<vector<int>> aa({{1, 1, 1}, {1, 2, 3}, {1, 1, 1}, {1, 1, 4}});
    // auto it = unique(aa.begin(), aa.end());
    // aa.resize(distance(aa.begin(), it));
    // for (vector<int> a : aa)
    // {
    //     for (int i : a)
    //         cout << i << " ";
    //     cout << endl;
    // }

    // if (find(v.begin(), v.end(), a) != v.end())
    // {
    //     cout << "contains" << endl;
    // }
    vector<vector<int>> ans = threeSum(a);
    see("ans size", ans.size());
    for (vector<int> a : ans)
    {
        for (int i : a)
            cout << i << " ";
        cout << endl;
    }
}