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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* prev = NULL;
        ListNode* temp = slow;
        ListNode* nxt = NULL;
        while(temp){
            nxt = temp->next;
            temp->next = prev;
            prev = temp;
            temp = nxt;
        }

        ListNode* l1 = head;
        ListNode* l2 = prev;
        while(l2){
            if(l1->val != l2->val) return false;
            l1 = l1->next;
            l2 = l2->next;
        }

        return true;
    }
};