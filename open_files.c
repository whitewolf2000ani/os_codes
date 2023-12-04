#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    char buff[50];
    char buff2[50];
    int fd,fd1;

    fd=open("AOC_day2.1.txt",O_RDONLY);
    int n=read(fd,buff,7);
    fd1=open("AOC_starting.txt",O_RDONLY|O_WRONLY|O_APPEND,0777);
    write(fd1,buff,n);
    write(fd1,"0",1);
    int pin=lseek(fd1,0,SEEK_CUR);
    printf("%d\n",pin);

    return 0;
}