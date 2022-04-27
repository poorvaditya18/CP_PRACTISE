// Write a function to delete a node in a singly-linked list. You will not be given access to the head of the list, instead you will be given access to the node to be deleted directly.

// It is guaranteed that the node to be deleted is not a tail node in the list.


#include<iostream>
using namespace std;

struct ListNode
{
    int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};


class Solution 
{
public:

   
    void deleteNode(ListNode* node) 
    { 
       // method 1;
       //  ListNode* tail;
       // while(node->next!=NULL && node)
       // {
       //     ListNode* temp = node->next;
       //     swap(&node->val,&temp->val);
       //     tail=node;
       //     node= node->next;
       // }
       //  tail->next = NULL;
       //  delete node;  
        
        //shorter implementation :
        node->val = node->next->val;
        node->next = node->next->next;
        
    }
};

