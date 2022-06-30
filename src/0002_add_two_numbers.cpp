#include "linked_list_utils.h"
#include "0002_add_two_numbers.h"

namespace leetcode::add_two_numbers
{
    ListNode *Solution::addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int carry = 0;
        ListNode *head = new ListNode();
        ListNode *first = head;
        while (l1 || l2)
        {
            int iL1 = l1 ? l1->val : 0;
            int iL2 = l2 ? l2->val : 0;
            int res = (carry + iL1 + iL2) % 10;
            carry = (carry + iL1 + iL2) / 10;
            ListNode *newNode = new ListNode(res);
            head->next = newNode;
            head = head->next;
            if (l1)
            {
                l1 = l1->next;
            }
            if (l2)
            {
                l2 = l2->next;
            }
        }
        if (carry > 0)
        {
            head->next = new ListNode(carry);
        }
        return first->next;
    }
}