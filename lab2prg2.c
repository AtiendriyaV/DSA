#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void parent()
{

if (fork()==0)
printf("hello from child has\n");
else
printf("hello from parent\n");
}
int main()
{
parent();
return 0;
}
