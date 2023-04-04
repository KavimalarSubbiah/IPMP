//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}

Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Node* result = findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}

// } Driver Code Ends


/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node* findIntersection(Node* head1, Node* head2)
{
    Node* head=NULL;
    Node* tail=NULL;
    Node* i=head1;
    Node* j=head2;
    map<int,int> map;
    
    while(i!=NULL)
    {
        map[i->data]++;
        i=i->next;
    }
    
    while(j!=NULL)
    {
        map[j->data]++;
        j=j->next;
    }
    
    for(auto x: map)
    {
        if(x.second>1)
        {
            for(int k=0;k<x.second/2;k++)
            {Node* newNode= new Node(x.first);
            if(head==NULL)
            head=tail=newNode;
            else
            {tail->next=newNode;
            tail=newNode;}
            }
            
        }
    }
    
    return head;
}