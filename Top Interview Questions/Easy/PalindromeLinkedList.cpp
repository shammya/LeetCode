

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
// 1.recursive approach
// 2.base case if the head is null then null
// 3.another base case when we read at end of linked list we check if last node equals head
// 4.we maintain a pair of <ListNode*,bool> ListNode for getting the next element from starting as we return
// 5.as we return node pinter in the argument goes backward and the ListNode in return goes forward
// 6.hence we check equality of returned ListNode and the node in argument and store the result in the
//     2nd part of pair and return

pair<ListNode *, bool> palindrome(ListNode *head, ListNode *node)
{
    if (head == NULL) // if the head is null then always true
        return {NULL, true};
    if (node->next == NULL) // base case : whether last node equals first node or not
    {
        return {head->next, (node->val == head->val)};
    }

    pair<ListNode *, bool> res = palindrome(head, node->next); // we  receive the next node of head and result upto this node
    // cout<<head->val<<endl;
    res.second = (res.second & (node->val == res.first->val));
    res.first = (res.first)->next;
    return res;
}
bool isPalindrome(ListNode *head)
{
    pair<ListNode *, bool> ans = palindrome(head, head);
    return ans.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
}