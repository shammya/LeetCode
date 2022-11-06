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
// 1.variable carry for remainder of sum of 2 digits (7+9 = 17)->carry=1
// 2.calculate the digit and carry sum put sum%10 in result array and sum/10 in carry
// 3.continue step 2 until last digit
// 4.answer created in reverse order .finally reverse the vector

vector<int> plusOne(vector<int> &digits)
{
    vector<int> ans;
    int carry = 1;
    for (int i = digits.size() - 1; i >= 0; i--)
    {
        ans.push_back((carry + digits[i]) % 10);
        carry = (carry + digits[i]) / 10;
    }
    if (carry)
        ans.push_back(carry);
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    vector<int> digits({9, 9, 8}), newDigits;
    newDigits = plusOne(digits);
    for (int i : newDigits)
        cout << i << " ";
}