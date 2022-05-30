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
    ListNode* reverseList(ListNode* head) {
        
        if( !head){
            return NULL;
        }
        
        ListNode* cur = head;
        ListNode* prev = NULL;
        ListNode* next = cur;
        
        while( cur ){
            next= next->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        
        return prev;
        
    }
};