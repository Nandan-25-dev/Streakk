#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
    pid_t pid;
    pid = fork(); 
    if (pid<0){
        printf("Fork failed!");
    }else if (pid==0){
        printf("Child process (Pid: %d)\n",getpid());
        printf("Child is going to execute 'ls' command ...\n");
        execl("/bin/ls","ls","-l",NULL);
        perror("execl failed!");
        exit(1);
   }else{
    printf("parent process (PID : %d), child PID: %d\n",getpid(),pid);
    printf("Child process finished parent exists\n");
   }
   return 0;
}