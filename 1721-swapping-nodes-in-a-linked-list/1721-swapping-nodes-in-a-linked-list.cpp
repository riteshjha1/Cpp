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
    ListNode* swapNodes(ListNode* head, int k) {
        k = k-1;
        ListNode* FirstN = head;
        while(k>0){
            FirstN = FirstN->next;
            --k;
        }
        ListNode* f = FirstN;
        ListNode* SecondN = head;
        while(f->next != NULL){
            SecondN = SecondN->next;
            f = f->next;
        }
        
        int temp = FirstN->val;
        FirstN->val = SecondN->val;
        SecondN->val = temp;
        
        return head;
    }
};