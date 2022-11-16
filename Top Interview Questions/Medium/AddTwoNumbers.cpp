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

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *ans = NULL, *temp = NULL;
    int carry = 0;
    while (l1 && l2)
    {
        ListNode *node = new ListNode((l1->val + l2->val + carry) % 10);
        carry = (l1->val + l2->val + carry) / 10;
        if (temp == nullptr)
        {
            ans = node;
            temp = node;
        }
        else
        {
            temp->next = node;
            temp = temp->next;
        }

        l1 = l1->next;
        l2 = l2->next;
    }
    while (l1)
    {
        ListNode *node = new ListNode((l1->val + carry) % 10);
        carry = (l1->val + carry) / 10;
        temp->next = node;
        temp = temp->next;
        l1 = l1->next;
    }
    while (l2)
    {
        ListNode *node = new ListNode((l2->val + carry) % 10);
        carry = (l2->val + carry) / 10;
        temp->next = node;
        temp = temp->next;
        l2 = l2->next;
    }
    if (carry != 0)
    {
        ListNode *node = new ListNode(carry);
        temp->next = node;
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
}