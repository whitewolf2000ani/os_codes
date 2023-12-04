#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){

    pid_t p;
    printf("before fork!!\n");
    p=fork();

    if(p==0){
        printf("I am child with pid:%d\n",getpid());
        printf("I am child with ppid:%d\n",getppid());        
    }

    else{
        wait(NULL);
        printf("child pid:%d\n",p);
        printf("parent's id:%d\n",getpid());
    }
    printf("common\n");


}