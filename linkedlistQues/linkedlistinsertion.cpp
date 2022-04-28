// Create a link list of size N according to the given input literals. Each integer input is accompanied by an indicator which can either be 0 or 1. If it is 0, insert the integer in the beginning of the link list. If it is 1, insert the integer at the end of the link list. 
// Hint: When inserting at the end, make sure that you handle NULL explicitly.

// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
  }  
  cout<<"\n";
} 

class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) 
    {
       
       //if there is no list in the beginning 
       if(head==NULL)
       {
           // Your code here
          Node* n = new Node(x);
           head = n;
           return head ;
       }
       //if there is list 
       else
       {
           
           // Your code here
           Node* n = new Node(x); 
           n->next = head;
           head = n;
           return head;
       }
       
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  
    {
        
        //if there is no linked list in the beginning
       // Your code here
       if(head==NULL){
           Node* n = new Node(x);
           head = n;
           return head;
       }
       // if there is linked list 
       else
       {
           Node* n = new Node(x);
           Node* temp = head;
           while(temp->next!= NULL){
               temp = temp ->next;
           }
           temp->next = n;
           return head;
       }
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        struct Node *head = NULL;
        for (int i = 0; i < n; ++i)
        {
            int data, indicator;
            cin>>data;
            cin>>indicator;
            Solution obj;
            if(indicator)
                head = obj.insertAtEnd(head, data); 
            else
                head = obj.insertAtBegining(head, data);
        }
        printList(head); 
    }
    return 0; 
} 

  // } Driver Code Ends