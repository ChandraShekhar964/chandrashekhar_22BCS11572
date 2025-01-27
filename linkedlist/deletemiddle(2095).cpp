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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL){
            return NULL;
        }
        ListNode* x=head;
        ListNode* y = head -> next -> next;
        while(y !=NULL && y->next != NULL){
            x= x->next;
            y = y->next->next;
        }
        x->next = x-> next ->next;
        return head;
    }
};