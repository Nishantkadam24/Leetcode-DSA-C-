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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* ans=nullptr;
        for(int i=0;i<lists.size();i++){
            ListNode* dummy = new ListNode(0);
            ListNode* curr = dummy;
            ListNode* a = ans;
            ListNode* b = lists[i];
            while(a!=nullptr && b!=nullptr){
                if(a->val<=b->val){
                    curr->next=a;
                    a=a->next;
                }
                else{
                    curr->next=b;
                    b=b->next;
                }
                curr=curr->next;
            }
            if(a!=nullptr){
                curr->next=a;
            }
            if(b!=nullptr){
                curr->next=b;
            }
            ans=dummy->next;
        }
        
        return ans;
    }
};