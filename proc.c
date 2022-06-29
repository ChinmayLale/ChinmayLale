#include <signal.h>
#include <stdio.h> 
#include<unistd.h>
#include <sys/types.h>
#include <unistd.h>
int main ()
{
 int pid1,pid2;
//-----------------------------------------------------
 pid1 = fork();
 if (pid1 == 0) /* First child */
 { 
   while (1) /* Infinite loop */
    { 
      printf ("process %d is alive \n",getpid());
      sleep (1); 
    }
 }
//-----------------------------------------------------
 pid2 = fork (); /* Second child */
 if (pid2 == 0)
   { 
     while (1) /* Infinite loop */
    { 
      printf ("process %d is alive \n",getpid());
      sleep (1);
    }
   }
        sleep (1);

 	printf("\n \n process 1 killed \n\n");
 	kill (pid1, SIGSTOP); /* Suspend first child */
 	sleep (3);
 	printf("\n \n process 1 resumed \n\n ");
 	kill (pid1, SIGCONT); /* Resume first child */
 	sleep (2);
 	kill (pid1, SIGINT); /* abort first child */
 	kill (pid2, SIGINT); /* abort second child */
 	printf("\n \n both process killed\n"); 
return 0;
} 
