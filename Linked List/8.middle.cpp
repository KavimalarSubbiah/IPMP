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
    ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode * root=head;

        while(root!=NULL)
        {
            count++;
            root=root->next;
        }

        ListNode * root1=head;

        int count1=0;
        
        while(count1<count/2)
        {
            root1=root1->next;
            count1++;
        }
        
        
        return root1;}
    
};