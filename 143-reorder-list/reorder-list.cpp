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
    void reorderList(ListNode* head) {
    
        if (!head || !head->next || !head->next->next) {
            return;  
        }
    
        ListNode* current = head;
        
        while (current && current->next && current->next->next) {

            ListNode* lastNode = current;
            while (lastNode->next && lastNode->next->next) {
                lastNode = lastNode->next;
            }
            ListNode* tail = lastNode->next; 
            
            ListNode* nextInSequence = current->next;
            
            lastNode->next = nullptr;
            
            current->next = tail;
            
            tail->next = nextInSequence;
            
            current = nextInSequence;
        }
    }
};