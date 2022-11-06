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
// 1.using recursion dfs
// 2.use 2 pointers to check left subtree and right subtree of the root

bool check(TreeNode *a, TreeNode *b)
{
    if (a == NULL && b == NULL)
        return true;
    else if (a == NULL || b == NULL)
        return false;
    bool f1 = check(a->left, b->right);
    bool f2 = check(a->right, b->left);
    return (f1 & f2 & (a->val == b->val));
}

bool isSymmetric(TreeNode *root)
{
    return check(root->left, root->right);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
}