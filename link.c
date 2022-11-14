#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
}
            
   void travel(struct node *p)
  {
   while ( p!= NULL)
   {
     printf("element: %d\n", p ->data);
     p = p-> next;
   }
   
   struct node *first(struct node *head =, int data)
   {
    struct node *ptr = (struct node *)malloc(sizeof(struct(node));
    p -> data = data;
    p -> next = head;
    
    return p;
    }
     
    int main()
    {
     struct node * head;
     struct node * second;
     struct node * third;
     struct node * fourth;
     
     head = (struct node *)malloc(sizeof(struct node));
     second = (struct node *)malloc(sizeof(struct node));
     third = (struct node *)malloc(sizeof(struct node));
     fourth = (struct node *)malloc(sizeof(struct node));
     
     
     head -> data =7;
     head  -> next = second;
     e
