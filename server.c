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
int soc;int b;int conn;int len,ch;
char str[100];
time_t tick;

struct sockaddr_in servaddr;
struct sockaddr_in cliaddr;
soc=socket(AF_INET,SOCK_STREAM,0);
if(soc>=0){
printf("Socket creation is successful\n");                                                                                   
}
else if(soc<0){
printf("Socket error\n");
}

b=bind(soc,(struct sockaddr *)&servaddr,sizeof(servaddr));
if(b>=0){
printf("Bind successful\n");
listen(soc,50);
}
else if(b<0){
printf("Bind error\n");
}
for(;;)
{
len = sizeof(ch);
conn = accept(soc,(struct sockaddr*)&cliaddr,&len);
printf("Accepted\n");
/*tick=time(NULL);
snprintf(str,sizeof(str),"%s",ctime(&tick));
printf("%s\n",str);*/
}

}


