#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
    pid_t pid;
    pid= fork();
    if (pid< 0){
        printf("Fork failed");
    }else if (pid ==0){
        printf("Child process (pid: %d)\n",getpid());
        printf ("Child is now going to execute 'ls' command...\n");
        printf("/bin/ls","ls","-l",NULL);
        exit(1);
    }
    else{
        printf("Parent process (pid: %d), child process",getpid(),pid);
        printf ("Child process finished parent exists");
    }
    return 0;
}