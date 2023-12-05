#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int main(){
    int fd[2],n;
    int cd[2];
    pid_t p;
    char buff[100];
    char rev[200];
    printf("enter some string to be reversed from the child process pid:%d\n",getpid());
    scanf("%s",buff);
    int len=strlen(buff);
    pipe(cd);
    pipe(fd);
    p=fork();

    if(p==0){
        close(fd[0]);
        close(cd[1]);
        write(fd[1],buff,strlen(buff));
        read(cd[0],rev,strlen(rev));
        printf("The reversed string is: %s\n",rev);

    }
   
    else{
        close(fd[1]);
        close(cd[0]);
        printf("The string received in parent process with pid: %d is\n",getpid());
        int m=read(fd[0],buff,strlen(buff));
        printf("the received info is %s\n",buff);
        int i;
        for(i=0;i<strlen(buff);i++){
            rev[i]=buff[strlen(buff)-1-i];
        }
        write(cd[1],rev,strlen(buff));

    }






}