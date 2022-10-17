#include<stdio.h>
#include<stdlib.h>
void insert_beg();
void display();
void insert_end();

struct node
{
    int data;
    struct node *next;
} *head, *ptr;

void insert_beg()
{
    ptr = (struct node *) malloc(sizeof(struct node *));
    int item;
   
    if(ptr==NULL)
    {
        printf("OVERFLOW \n");    
    }
    else
    {
        printf("enter the value: \n");
        scanf("%d", &item);
        ptr->data=item;
        ptr->next=head;
        head=ptr;
        printf("node inserted \n");    
    }
}

void insert_end()
{
    struct node temp;
    ptr = (struct node *) malloc(sizeof(struct node *));
    int item;
   
    if(ptr==NULL)
    {
        printf("OVERFLOW \n");    
    }
    else
    {
        printf("enter the value: \n");
        scanf("%d", &item);
        ptr->data=item;
        if(head==NULL)
        {
            ptr->next=NULL;
            head=ptr;
            printf("node inserted \n");   
        }
        else
        {
            temp = head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
        }
        temp->next=ptr;
        ptr->next=NULL;
        printf("node inserted \n");    
    }
    
}

void delete_beg()  
{  
     
    if(head == NULL)  
    {  
        printf("\nList is empty\n");  
    }  
    else   
    {  
        ptr = head;  
        head = ptr->next;  
          
        printf("\nNode deleted from the begining ...\n",head->data);  
        free(ptr);
    }  
}  

void delete_end()
{
    struct node *temp;
    ptr = head;
    if(head==NULL)
    {
        printf("linked list is empty\n");    
    }
    else if(head->next == NULL)
    {
        temp=ptr->data;
        head=NULL;  
        free(head);  
        printf("deleted node is: \n",temp->data);
    }
    else  
    {  
           
        while(ptr->next != NULL)  
        {  
            temp = ptr;  
            ptr = ptr ->next;  
        }  
        printf("\nDeleted Node from the last is..\n",temp->data);
        temp->next = NULL;  
        free(ptr);  
          
    }     
}

void display()
{
    ptr = head;
    if(ptr == NULL)
    {
        printf("empty linked list \n");    
    }
    else
    {
        printf("the values in list are: \n");
        while(ptr!=NULL)
        {
            printf("\n%d",ptr->data);
            ptr=ptr->next;                            
        }    
    }
}

int main()
{
    
    int choice;
    while(choice !=5)
    {
        printf("\t choose one of the following option: \n");
    
        printf("enter 1 for inserting at begining: \n");
        printf("enter 2 for inserting at end: \n");
        printf("enter 3 for deleting at begining: \n");
        printf("enter 4 for deleting at end: \n");
        printf("enter 5 for traversing: \n");
        printf("enter your choice: \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            insert_beg();
            break;
            case 2:
            insert_end();
            case 3:
            delete_beg();
            case 4:
            delete_end();
            case 5:
            display();
            default:
            printf("please enter valid choice \n");    
            }
    }
     
    
    
}

