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
    ListNode* middleNode(ListNode* head) {
        ListNode* ptr;
        ListNode* ptr1;
        ptr = head;
        ptr1 = head;
        while(ptr1->next!=NULL){

            ptr = ptr->next;

            ptr1 = ptr1->next->next;
            if(ptr1 == NULL) break;
            // return ptr->next if ptr->next null
        }
        if(ptr1==NULL) return ptr;
        else return ptr;//->next;
    }
};
