#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
  int a,N;
  printf("Enter value for a:");
  scanf("%d",&a);
  for(a=0;a<N;a++)
   {
    a=fork();
 
  if(a=0)
  printf("good morning boss\n");
  
  if(a>0)
  printf("you have 2 meeting\n");
 
  if(a>=5)
  printf("you have breakfast\n");
 }
 return 0;
 }
