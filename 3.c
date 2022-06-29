#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
	//variable to store calling function's process id
	int process_id;
	//variable to store parent function's process id
	
    int p_process_id,p_group_id;

	//getpid() - will return process 
	process_id = getpid();

	//getppid() - will return process  parent id
	p_process_id = getppid();
 
    //getegid()-will return process group id of Process
        
    p_group_id=getegid();

	//printing the process ids
	printf("The process id: %d\n",process_id);
	printf("The process  parent id: %d\n",p_process_id);
    printf("The process  group id: %d\n",p_group_id);

	return 0;
}


