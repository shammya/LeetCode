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

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> table(numRows);
    for (int i = 0; i < numRows;i++)
    {
        table[i] = vector<int>(i + 1);
        table[i][0] = table[i][i] = 1;
    }
    for (int i = 0; i < numRows;i++)
    {
        for (int j = 1; j < table[i].size() - 1;j++)
            table[i][j] = table[i - 1][j - 1] + table[i - 1][j];
    }
    return table;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    vector<vector<int>> table = generate(5);
    for(vector<int> v : table)
    {
        for(int i : v)
            cout << i << " ";
        cout << endl;
    }
}