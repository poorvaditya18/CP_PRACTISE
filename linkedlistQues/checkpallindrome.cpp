// Given a singly linked list of size N of integers. The task is to check if the given linked list is palindrome or not.

//method 1 : using vector to check whether the given linked list is pallindrome or not . use two pointer technique

//method 2 : idea is to divide the linked list in two halves then reverse any one of them and then compare.


// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include<vector>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




class Solution{
  public:
    //Function to check whether the list is palindrome.
    

    //method 1 : storing in vector . space complexity : 0(n) time : O(n)
    bool isPalindrome(Node *head)
    {
    //     //Your code here
    //     vector<int> res;
    //     Node* temp = head;
    //     while(temp)
    //     {
    //         res.push_back(temp->data);
    //         temp = temp->next;
    //     }
    //     //check pallindrome
    //   for(int i=0;i<res.size()/2;i++)
    //   {
    //         if(res[i]!= res[res.size()-1-i])
    //         {
    //             return false;
    //         }
    //   }
    //     return true;
        
    // }
    
    //method 2: 
        if(head == NULL){return false;} //no Node exists
        if(head->next == NULL){return true;} //single node always pallindrome
        
        Node* fast= head;
        Node* slow = head;
        while(fast and fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        Node* rev = Reverse(slow); // this will reverse the half of the linked list
        
        while(rev and head)
        {
            if(rev->data != head->data){return false;}
            rev= rev->next;
            head = head->next;
        }
        
        return true;
    }
    
    Node* Reverse(Node* head)
    {
        Node* p =NULL;
        Node* c = head;
        Node* t;
        while(c!=NULL)
        {
            t = c->next;
            c->next = p;
            p=c;
            c= t;
        }
        head = p;
        return head;
    }
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends