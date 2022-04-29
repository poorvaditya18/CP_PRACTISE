// You are given the heads of two sorted linked lists list1 and list2.

// Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

// Return the head of the merged linked list.



// this can be done using two method : 
// 1 . dummy node this will use extra space 
// 2.  changing of the node->next 

#include<iostream>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };



class Solution 
{
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
       
        // ListNode* d = new ListNode(); //this will be our dummy node
        // ListNode* dd = d;
        // ListNode* h1 = list1;
        // ListNode* h2 = list2;
        // if(list1==NULL){
        //     return list2;
        // }
        // if(list2==NULL){
        //     return list1;
        // }
        // while(h1!=NULL and h2!=NULL)
        // {
        // if(h1->val==h2->val)
        // {
        //     //then  push both the nodes in the dummy node and increment both the pointers
        //     ListNode * n1 = new ListNode(h1->val);
        //     dd = n1;
        //     ListNode * n2 = new ListNode(h2->val);
        //     dd = n2;
        //     d->next = n1;
        //     n1->next=n2;
        //     h1 = h1->next;
        //     h2 = h2->next;
        // }
        // if(h1->val<h2->val)
        // {
        //     //create and push the h1 node and increment the h1.
        //     ListNode* n1 = new ListNode(h1->val);
        //     dd->next = n1;
        //     dd = n1;
        //     h1 = h1->next;
        // }
        // if(h1->val>h2->val)
        // {
        //     //create and push the h1 node and increment the h1.
        //     ListNode* n2 = new ListNode(h2->val);
        //     dd->next = n2;
        //     dd = n2;
        //     h2 = h2->next;
        // }
        // }
        // //if h1 = null then copy the remaing elements of the array
        // if(h1==NULL)
        // {
        //     while(h2!=NULL)
        //     {
        //         ListNode* n2 = new ListNode(h2->val);
        //         dd->next = n2;
        //         dd=n2;
        //         h2=h2->next;
        //     }
        // }
        // // h2 = null then copy the remaining elements of the array
        // if(h2==NULL)
        // {
        //     while(h1!=NULL)
        //     {
        //         ListNode* n1 = new ListNode(h1->val);
        //         dd->next = n1;
        //         dd=n1;
        //         h1=h1->next;
        //     }
        // }
        
        // return d->next;
     
     // method 2 :
            if(l1==NULL){
                return l2;
            }
            if(l2==NULL)
            {
                return l1;
            }
            if(l1->val>l2->val)
            {
                //l1 = should point to smaller value linked list thats why we swapped
               swap(l1,l2);
            }
            ListNode* res = l1;
            while(l1!=NULL && l2!=NULL)
            {
                ListNode* temp = NULL;
                while(l1!=NULL && l1->val<=l2->val)
                {
                    temp = l1;
                    l1 = l1->next;
                }
                temp->next = l2; //to establish the connection 
             //swap
             swap(l1,l2);

            }
            return res;
    }
};
    

