// Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list

#include<iostream>
using namespace std;
// { Driver Code Starts
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
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


/* Function to get the nth node from the last of a linked list*/
int getNthFromLast(struct Node* head, int n);



/* Driver program to test above function*/
int main()
{
  int T,i,n,l,k;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n>>k;
        int firstdata;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }

    cout<<getNthFromLast(head, k)<<endl;
    }
    return 0;
}// } Driver Code Ends

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       // Your code here
       
    int c=0; // to count the size
    Node * ptr=head; 
    //while ptr doesn't point to null
       while(ptr)
       {
        ptr=ptr->next;
           c++;

       }
       
       // now if nth index from last is greater the size of list or it is negative then return 
       if(n>c ||n<1)
         return -1;
       
       Node * temp=head;
       int dif=c-n; //diff is the index from start
       for(int i=0;i<dif;i++)
       {
           temp=temp->next;
       }
       
       
       return temp->data;

}