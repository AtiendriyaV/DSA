#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
void main()
{
    int a[20][20],ch,i,j,k,no,n,m,sum,re,r[50],flag=0;
    do
    {
        printf("\nVRC");
        printf("\n1.Sender \n2.Receiver\n3.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter No. of Messages:");
                scanf("%d",&n);
                printf("\nEnter the no. of bits for message:");
                scanf("%d",&m);
                for(i=0;i<n;i++) {
                        printf("\nEnter %d message=",i+1);
                        for(j=0;j<n;j++)
                            scanf("%d",&a[i][j]);
                }
                for(i=0;i<n;i++) {
                    sum=0;
                    for(j=0;j<n;j++){
                        sum=sum+a[i][j];
                        a[i][j]=(sum%2);
                    }
                    for(i=0;i<=m;i++){
                        sum=0;
                        for(j=0;j<m;j++)
                            sum=sum+a[j][i];
a[j][i]=(sum%2);
}
printf("\nMessage sent is :-\n");
for(i=0;i<=n;i++)
{
for(j=0;j<=m;j++)
printf("%d ",a[i][j]);
printf(" ");
}
break;

case 2:
flag=0;
printf("Enter Number of bits for received message=");
scanf("%d",&re);
printf("\nEnter The Received Message:-\n");
for(i=0;i scanf("%d",&r[i]);
printf("Enter Number of Messages=");
scanf("%d",&n);
m=re/(n+1);
k=0;
for(i=0;i<=n;i++)
{
for(j=0;j {
a[i][j]=r[k];
k++;
}
}
for(i=0;i<=n;i++)
{
for(j=0;j printf("%d ",a[i][j]);
printf("\n");
}

for(i=0;i<=n;i++)
{
sum=0;
for(j=0;j {
sum=sum+a[i][j];
}
if(sum%2!=0)
{
printf("\nThere is an Error");
flag=1;
break;
}
}
if(flag!=1)
{
for(i=0;i {
sum=0;
for(j=0;j<=n;j++)
{
sum=sum+a[j][i];
}
if(sum%2!=0)
{
printf("\nThere is an Error");
flag=1;
break;
}
}
}
if(flag!=1)
printf("No Error");
break;
case 3: exit(0);
}
}while(1);
}

