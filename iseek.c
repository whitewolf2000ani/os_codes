#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main(){

    int fd;
    char buff[100];
    fd=open("AOC_starting.txt",O_RDWR,0642);
    int n=read(fd,buff,10);
    write(1,buff,10);
    int pin=lseek(fd,5,SEEK_CUR);
    write(fd,"hello",5);
    printf("\n %d \n",pin);
    lseek(fd,-5,SEEK_CUR);
    read(fd,buff,10);
    write(1,buff,10);


    return 0;
}