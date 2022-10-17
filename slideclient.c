#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
#define max 30
#define PORT 2100

int main()
{
struct sockaddr_in servaddr,cliaddr;
int n,soc;
int len;char buff[100];
soc=socket(AF_INET,SOCK_STREAM,0);
if(soc>=0){ 
printf("Socket is Opened\n");
}
else{
printf("Error \n");
}
if(connect(soc,(struct sockaddr*)&servaddr,sizeof(servaddr))<0)
{
printf("Error in connection failed\n");
}
else
{
printf("connected successfully\n");

}
/*if(read(soc,buff,sizeof(buff))<0)
{
printf("\nError in Reading");
exit(0);
}
else
{printf("\nMessage Read %s",buff);
}*/
}


