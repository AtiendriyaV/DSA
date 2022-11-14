#include<stdio.h>
#include<iostream>
using namespace std;
struct node
{
  int data;
  struct node *link;
};
struct node *p,*tail;
struct node *head=NULL;

void insert(int a)
{
  p= (struct node *)malloc(sizeof(struct node));
  p->data=a;
  p->link=NULL;
  if(head==NULL)
  {
    tail=head=p;
  }
  else
  {
    tail->link=p;
    tail=tail->link;
  }
}

void display()
{
  struct node *i;
  for(i=head;i!=NULL;i=i->link)
  {
    cout<<i->data;
  }
  
}

int main()
{
 insert(2);
  insert(3);
  display();
  return 0;
}
