//To apply the system call for creating and managing child- parent processes.

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    pid_t pid, mypid, myppid;

    pid = getpid();
    printf("Before fork process id is %d\n", pid);

    pid = fork();

    if (pid < 0)
    {
        printf("Fork failed\n");
        return 1;
    }
    else if (pid == 0)
    {
        // Child process
        printf("This is child process\n");
        mypid = getpid();
        myppid = getppid();
        printf("Process id: %d and Parent id: %d\n", mypid, myppid);
    }
    else
    {
        // Parent process
        sleep(5);
        printf("This is parent process\n");
        mypid = getpid();
        myppid = getppid();
        printf("Process id: %d and Parent id: %d\n", mypid, myppid);
        printf("Newly created child process id: %d\n", pid);
    }

    return 0;
}

/* Ouput -
Before fork process id is 3240
This is child process
Process id: 3241 and Parent id: 3240
This is parent process
Process id: 3240 and Parent id: 2100
Newly created child process id: 3241*/
