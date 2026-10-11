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
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode *> a;
        while(head){
            if(a.count(head)) return head;
            a.insert(head);
            head=head->next;
        }
        return NULL;
    }
};