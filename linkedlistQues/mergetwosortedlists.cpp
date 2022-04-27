#include<stdio.h>
using namespace std;

// this can be done using two method 
// 1 . dummy node this will use extra space 
// 2.  changing the pointers 


class node
{
  public:
  int data ;
  node* next;
  node()
  {
      data = 0;
      next = NULL;

  }
  node(int d)
  {
      data = d;
      next = NULL ;
  }
};
