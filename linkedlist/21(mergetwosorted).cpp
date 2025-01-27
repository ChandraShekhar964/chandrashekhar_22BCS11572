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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>v;
        ListNode* temp=list1;
        ListNode* temp1=list2;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
         while(temp1!=NULL){
            v.push_back(temp1->val);
            temp1=temp1->next;
        }
        sort(v.begin(),v.end());
       ListNode* dummy = new ListNode(-1);
       ListNode* current = dummy;
        for(int i:v){
            current->next=new ListNode(i);
            current=current->next;
        }
        return dummy->next;
    }
};