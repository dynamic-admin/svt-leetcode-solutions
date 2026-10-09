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
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode *> a;
        while(head){
            if(a.count(head)) return true;
            a.insert(head);
            head=head->next;
    }
    return false;
    }
};