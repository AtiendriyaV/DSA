#include<stdio.h>
int main()
{
    int AT[10],BT[10],WT[10],TT[10],n;
    int burst=0,cmpl_T;
    float Avg_WT,Avg_TT,Total=0;
    printf("Enter number of the process\n");
    scanf("%d",&n);
    printf("Enter Arrival time\n");
    printf("AT\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&AT[i]);
    }
    printf("Enter Burst Time\n");
    printf("BT\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&BT[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i==0)
            WT[i]=AT[i];
        else
            WT[i]=burst-AT[i];
        burst+=BT[i];
        Total+=WT[i];
    }
    Avg_WT=Total/n;
    
    cmpl_T=0;
    Total=0;
    for(int i=0;i<n;i++)
    {
        cmpl_T+=BT[i];
        TT[i]=cmpl_T-AT[i];
        Total+=TT[i];
    }
    Avg_TT=Total/n;
    
    
    printf("Process\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",i+1);
    }
    printf("Waiting_time\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",WT[i]);
    }
    printf("TurnA_time\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",TT[i]);
    }
    printf("Average waiting time is : %f\n",Avg_WT);
    printf("Average turn around time is : %f\n",Avg_TT);
    return 0;
} 
