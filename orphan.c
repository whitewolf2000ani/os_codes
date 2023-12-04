#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(){

    pid_t p;
    printf("program starts!\n");
    p=fork();

    if(p==0){
        sleep(5);
        printf("child process:my pid is %d\n",getpid());
        printf("child process:my parent pid is %d\n",getppid());
    }
    else{
        printf("Parent process:my child's id is %d\n",p);
        printf("Parent process:My pid is %d\n",getpid());
    }

    printf("common\n");


}