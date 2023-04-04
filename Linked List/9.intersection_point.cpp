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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* rootA=headA;
        ListNode* rootB=headB;

        while(rootA!=NULL )
        {
            while(rootB!= NULL)
            {
            if(rootA==rootB)
            return rootB;
            rootB=rootB->next;}
            rootB=headB;
            rootA=rootA->next;
        }

        return NULL;
    }
};