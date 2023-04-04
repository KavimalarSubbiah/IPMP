
class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        struct Node* current=head;
        struct Node* prev=NULL;
        struct Node* next=head->next;
        while(next!=NULL)
        {
            current->next=prev;
            prev=current;
            current=next;
            next=next->next;
            
        }
        current->next=prev;
        return current;
    }
    
};
    