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
        if(!list1)
            return list2;
        if(!list2)
            return list1;
        
        std::multiset<int> values;
        while (list1)
        {
            values.insert(list1->val);
            list1 = list1->next;
        }
        while (list2)
        {
            values.insert(list2->val);
            list2 = list2->next;
        }
        
        ListNode dummy(0);
        ListNode* current = &dummy;
        
        for (int val : values)
        {
            current->next = new ListNode(val);
            current = current->next;
        }
        
        return dummy.next;
    }
};