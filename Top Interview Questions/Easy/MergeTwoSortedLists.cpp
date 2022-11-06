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
// 1.create head from min of list1 and list2
// 2.run a loop until any of list1 or list2 is traversed
// 3.run a loop on list1 to check if any remains
// 3.run a loop on list2 to check if any remains

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{

    struct ListNode *head;
    struct ListNode *temp;

    if (list1 == NULL)
        return list2;
    if (list2 == NULL)
        return list1;

    if (list1->val <= list2->val)
    {
        head = list1;
        list1 = list1->next;
    }
    else
    {
        head = list2;
        list2 = list2->next;
    }
    temp = head;

    while (list1 != NULL && list2 != NULL)
    {
        if (list1->val <= list2->val)
        {
            head->next = list1;
            list1 = list1->next;
        }
        else
        {
            head->next = list2;
            list2 = list2->next;
        }
        head = head->next;
    }
    if (list1)
    {
        head->next = list1;
        list1 = list1->next;
    }
    if (list2)
    {
        head->next = list2;
        list2 = list2->next;
    }
    return temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
}