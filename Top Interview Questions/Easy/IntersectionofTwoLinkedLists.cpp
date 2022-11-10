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

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    ListNode *ptrA = headA, *ptrB = headB;
    int a = 0, b = 0;
    while (ptrA)
    {
        a++;
        ptrA = ptrA->next;
    }
    while (ptrB)
    {
        b++;
        ptrB = ptrB->next;
    }
    while (a > b)
    {
        headA = headA->next;
        a--;
    }
    while (a < b)
    {
        headB = headB->next;
        b--;
    }
    while (headA)
    {
        if (headA == headB)
            return headA;
        headA = headA->next;
        headB = headB->next;
    }

    return NULL;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
}