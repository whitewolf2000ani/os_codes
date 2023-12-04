#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(){

    int s;
    pid_t p;
    printf("program starts!\n");
    p=fork();

    if(p==0){
        printf("child process:my pid is %d\n",getpid());
        printf("child process:my parent pid is %d\n",getppid());
        execl("./b.out","b.out",NULL);
       
    }
    else{
        printf("Parent process:my child's id is %d\n",p);
        printf("Parent process:My pid is %d\n",getpid());
        wait(&s);
        printf("\nreturn value:%d\n",WEXITSTATUS(s));
    }


}