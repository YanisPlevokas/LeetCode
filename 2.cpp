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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(-1);
        int counter = 0;
        ListNode* tmp = head;
        while (l1 || l2)
        {
            if (l1)
            {
                counter += l1->val;
                l1 = l1->next;
            }
            if (l2)
            {
                counter += l2->val;
                l2 = l2->next;
            }
            tmp->next = new ListNode(counter % 10);
            counter = counter / 10;
            tmp = tmp->next;
        }
        if (counter)
            tmp->next = new ListNode(counter);
        return head->next;
    }
};