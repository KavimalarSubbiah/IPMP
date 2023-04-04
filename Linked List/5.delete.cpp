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
    void deleteNode(ListNode* node) {
        ListNode* copy=new ListNode(node->next->val);
        ListNode* root=node->next->next;
        ListNode* root1=copy;
        while(root!=NULL)
        {
            copy->next=root;
            root=root->next;
            copy=copy->next;
        }

        while(root1->next!=NULL)
        {
            node->val=root1->val;
            root1=root1->next;
            node=node->next;
        }

        node->val=root1->val;
        node->next=NULL;

        
        

        
    }
};