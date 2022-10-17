#include<unistd.h>
int main(int arge,  char *argv[])
{
int i;
char buf[5]={"-----"};
for (i=0; i<arge; i++);
{
 write (1,argv[i],5);
 write (1,buf,5);
 }
 }


