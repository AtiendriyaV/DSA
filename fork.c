#include<stdio.h>
#include<unistd.h>
int main()
{
pid_t rval;
rval=fork();
if (rval==0)
{
printf("i am the child process %d\n",getpid());
printf("child:my parent id is %d\n",getppid());
}
else if (rval>0)
{
printf("i am the parent process %d\n",getpid());
printf("parent:my parent id is %d\n",getppid());
}
else
printf("error in fork()");
return 0;
}
