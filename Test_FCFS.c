#include<stdio.h>
int main()
{
    float bt[30],wt[30],tat[30];
    float avg_wt = 0 , avg_tat = 0 ;
    int i , j , total_p ; 
    printf("Enter The Number Of Process to Execute : ");
    scanf("%d",&total_p);
    printf("Enter Brust Time For process\n");
    for ( i = 0 ; i < total_p ; i++)
    {
        printf("Process [%d] .",i+1);
        scanf("%f",&bt[i]);
    }
    wt[0] = 0 ;
    for (i = 1 ; i < total_p ; i++)
    {
        wt[i] = 0 ;
        for (j = 0 ; j < i ; j++)
        {
            wt[i] = wt[i] + bt[j];
        }
    }
    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0 ; i < total_p ; i++ )
    {
        tat[i] = bt[i] + wt[i];
        avg_wt = avg_wt + wt[i];
        avg_tat = avg_tat + tat[i];
        printf("Process[%d].\t%.2f\t\t%.2f\t\t%.2f\n",(i+1),bt[i],wt[i],tat[i]);
    }
    printf("\n");
    avg_wt = avg_wt / i;
    avg_tat = avg_tat / i;
    printf("\nAverage Waiting time : %d\n",avg_wt);
    printf("Average TurnAround time : %d\n",avg_tat);
    return 0 ;
}