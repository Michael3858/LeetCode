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
    ListNode* swapPairs(ListNode* head) {
        ListNode* node = new ListNode(0, head);
        ListNode* ans = node;
        while(head != nullptr && head -> next != nullptr){
            ListNode* nextPair = head -> next -> next;
            node -> next = head -> next;
            head -> next -> next = head;
            head -> next = nextPair;
            node = head;
            head = nextPair;
        }
        return ans -> next;
    }
};