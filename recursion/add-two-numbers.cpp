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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return add(l1, l2, 0);
    }
    ListNode* add(ListNode* l1, ListNode* l2, int c){
        ListNode* res = new ListNode(0);
        if(l1 != nullptr && l2 != nullptr){
            res -> val = (l1 -> val + l2 -> val + c) % 10;
            c = (l1 -> val + l2 -> val + c) / 10;
            res -> next = add(l1 -> next, l2 -> next, c);
        }
        else if(l1 != nullptr && l2 == nullptr){
            res -> val = (l1 -> val + c) % 10;
            c = (l1 -> val + c) / 10;
            res -> next = add(l1 -> next, nullptr, c);
        }
        else if(l1 == nullptr && l2 != nullptr){
            res -> val = (l2 -> val + c) % 10;
            c = (l2 -> val + c) / 10;
            res -> next = add(nullptr, l2 -> next, c);
        }
        else{
            if(c == 1){
                res -> val = 1;
                return res;
            }
            return nullptr;
        }
        return res;
    }
};