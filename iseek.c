#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main(){

    int fd,n;
    char buff[100];
    fd=open("AOC_starting.txt",O_APPEND|O_RDWR,0777);
    int pin=lseek(fd,10,SEEK_SET);  
    printf("%d\n",pin);
    write(fd,"neniloves",10);
    
}