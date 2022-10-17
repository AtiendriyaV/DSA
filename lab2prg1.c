#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void parentchild()
{
int x=1;
if (fork()==0)
printf("hello from child has x=%d\n",++x);
else
printf("hello from parent has x=%d\n",--x);
}
int main()
{
parentchild();
return 0;
}
