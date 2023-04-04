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
    bool isPalindrome(ListNode* head) {

        ListNode* copy=NULL;
        ListNode* root=head;

        while(root!=NULL)
        {
            ListNode* new_node= new ListNode(root->val);
            new_node->next=copy;
            copy=new_node;
            root=root->next;
            
        }

        

        ListNode* i=copy;
        ListNode* j=head;

        while(i!=NULL && j!=NULL)
        {
            if(i->val!=j->val) return false;
            i=i->next;
            j=j->next;
        }

        return true;
        
    }

   
};