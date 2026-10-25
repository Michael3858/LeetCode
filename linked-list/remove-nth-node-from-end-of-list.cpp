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
        ListNode* late = new ListNode(0, head);
        ListNode* res = late;
        int count = 0;
        while(head != nullptr){
            count++;
            if(head -> next == nullptr){
                late -> next = late -> next -> next;
            }
            if(count >= n){
                late = late -> next;
            }
            head = head -> next;
        }
        return res -> next;
    }
};