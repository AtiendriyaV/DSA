#include <stdio.h>
#define size n

void enqueue();
void dequeue();
void show()
int inp_arr[size];

int Rear = - 1;
int Front = - 1;
int main()
{
printf("welcome to bank cash counter");
}

{
    int ch;
    while (1)
    {
        printf("1.Enqueue Operation\n");
        printf("2.Dequeue Operation\n");
        printf("3.Display the Queue\n");
        printf("4.Exit\n");
        printf("Enter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            show();
            break;
            case 4:
            exit(0);
            default:
            printf("Incorrect choice \n");
        } 
    } 
} 


void enqueue()
{

int a,A,S;


    if (Rear == SIZE - 1)
       printf("Overflow \n");
    else
    {
        if (Front == - 1)
      
        Front = 0;


for(a=o;a<n;a++){

printf("enter the amount to be deposited:");
scanf("%d",&a);

printf("amount entered is:",&a);


printf("Display the transaction amount;"):
scanf("%d",&a);
if(a=0){

S =  total amount deposited = amount entered is: + 0;
printf("sum of amount deposited  is :" &S);

else
{
S= total amount deposited = amount entered is: + &a 
printf("Sum of amount is :",&S);

Rear = Rear + 1;
        inp_arr[Rear] = a;
}
}

void dequeue()
{
    if (Front == - 1 || Front > Rear)
    {
        printf("Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from the Queue: %d\n", inp_arr[Front]);
        Front = Front + 1;
    }
} 


void show()
{
    
    if (Front == - 1)
        printf("Empty Queue \n");
    else
    {
        printf("Queue: \n");
        for (int i = Front; i <= Rear; i++)
            printf("%d ", inp_arr[i]);
        printf("\n");
    }
} 





