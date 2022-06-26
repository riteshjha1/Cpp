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
  ListNode* removeNthFromEnd(ListNode* head, int n) {
        int N = 0;
        if(head == NULL){
            return NULL;
        }
        ListNode* ptr = head;
        while(ptr != NULL){
            N++;
            ptr = ptr->next;
        }
        int k = N-n;
        ptr = head;
        while(k >= 2){
            ptr = ptr->next;
            k--;
        }
        if(k == 0){
            return head->next;
        }
        ptr->next = ptr->next->next;
        return head;
    }
};