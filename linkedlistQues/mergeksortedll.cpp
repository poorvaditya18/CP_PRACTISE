// Given K sorted linked lists of different sizes. The task is to merge them in such a way that after merging they will be a single sorted linked list.

//Idea - is to merge two linked list first and do with the corresponding linked list.

// { Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

/* Function to print nodes in a given linked list */
void printList(Node* node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	cout<<endl;
}

 // } Driver Code Ends
/*Linked list Node structure

struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/ 

class Solution{
  public:
    //Function to merge K sorted linked list.
    
    //merge two linked list 
    Node* merge(Node* l1, Node* l2)
    {
        if(l1==NULL){return l2;}
        if(l2==NULL){
            return l1;
        }
        if(l1->data>l2->data){
            swap(l1,l2);
        }
        Node* res = l1;
        while(l1!=NULL and l2!=NULL)
        {
            Node* temp = NULL;
            while(l1!=NULL and l1->data<=l2->data)
            {
                temp = l1;
                l1= l1->next;
            }  
            temp->next = l2;
            swap(l1,l2);
        }
        return res;
    }
    
    Node * mergeKLists(Node *arr[], int K)
    {
           // Your code here
           Node* first = arr[0];
           for(int i=1;i<K;i++)
           {
               Node* second = arr[i];
               first = merge(first,second);
           }
           return first;
           
    }
};



// { Driver Code Starts.
// Driver program to test above functions
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
	   int N;
	   cin>>N;
       struct Node *arr[N];
       for(int j=0;j<N;j++)
        {
           int n;
           cin>>n;

           int x;
           cin>>x;
           arr[j]=new Node(x);
           Node *curr = arr[j];
           n--;

           for(int i=0;i<n;i++)
           {
               cin>>x;
               Node *temp = new Node(x);
               curr->next =temp;
               curr=temp;
           }
   		}
   		Solution obj;
   		Node *res = obj.mergeKLists(arr,N);
		printList(res);

   }

	return 0;
}
  // } Driver Code Ends