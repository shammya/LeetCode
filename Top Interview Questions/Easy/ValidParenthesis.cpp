
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
//  1.using stack
//  2.when get an opening bracket of a type ->push
//  3.when a closing bracket if same type as stack top ->pop else not valid

bool isOpening(char c)
{
    return (c == '(' || c == '{' || c == '[');
}
bool isMatching(char a, char b)
{
    return ((a == '{' && b == '}') || (a == '(' && b == ')') || (a == '[' && b == ']'));
}

bool isValid(string s)
{
    stack<char> stk;
    for (char i : s)
    {
        if (isOpening(i))
            stk.push(i);
        else
        {
            if (stk.size() == 0)
                return false;
            if (!isMatching(stk.top(), i))
                return false;
            else
                stk.pop();
        }
    }
    // cout << stk.size() << endl;
    return (stk.size() == 0);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    string s = "(]";
    cout << "balanced : " << isValid(s) << endl;
}