#include <stdbool.h>
#include <unistd.h>
#include <error.h>
#include <time.h>
#include<stdio.h>
#include <stdlib.h>


int main(int argc,int *argv[])
{
clockid_t watch;
int T,e,a,r;
int *A;
char buf[80];
int pid_t;
struct timespec* flag;
*A = (clock_getcpuclockid(r,&watch));
if(a == -1)
{
error(1,e,"clock work");
}

if(strftime(buf,80,"time and date: CLOCK_REALTIME",A),0)
write(1,"buffer lenghth 80 is  too small\n",80);
else
printf("%s\n",buf);
 exit(0);
  return 0;
  }
  
