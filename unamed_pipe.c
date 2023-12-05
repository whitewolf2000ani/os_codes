#include<stdio.h>
#include<unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>  


int main(){
    int fd[2],n;
    char buff[100];
    pid_t p;

 
    pipe(fd);
    p=fork();

    if(p>0){
     
        printf("parent process passing values\n");
        write(fd[1],"hello\n",6);
      

    }

    else{
     
        printf("child process:\n");
        int n=read(fd[0],buff,100);
        write(1,buff,n);
    }


}