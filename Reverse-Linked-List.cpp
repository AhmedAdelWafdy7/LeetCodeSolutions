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
        if(!head)
            return nullptr;
            
        ListNode* originalHead = head;
        std::deque<int> values;

        while (head)
        {
            values.push_front(head->val);
            head = head->next;
        }
        
        head = originalHead;
        while (head)
        {
            head->val = values.front();
            values.pop_front();
            head = head->next;
        }
        
        return originalHead;   
    }
};