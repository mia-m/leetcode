/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *lsum = NULL, *lnode = NULL;
        int sum = 0, carry = 0;
        
        while (l1 != NULL || l2 != NULL) {
            if (l1 != NULL && l2 != NULL) {
                sum = l1->val + l2->val + carry;
            } else if (l1 == NULL && l2 != NULL) {
                sum = l2->val + carry;
            } else if (l2 == NULL && l1 != NULL) {
                sum = l1->val + carry;
            } 
            if (sum >= 10) {
                sum -= 10;
                carry = 1;
            } else {
                carry = 0;
            }
            if (lsum == NULL) {
                lsum = new ListNode(sum);
                lnode = lsum;
            } else {
                lnode->next = new ListNode(sum);
                lnode = lnode->next;
            }
            if (l1 != NULL) l1 = l1->next;
            if (l2 != NULL) l2 = l2->next;
            
        }
        if (carry == 1) {
            lnode->next = new ListNode(1);
        }
        return lsum;
    }
};
