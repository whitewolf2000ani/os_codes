#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
    int old_fd;
    char buff[90];
    char buff2[100];

    old_fd = open("new.txt", O_RDWR | O_CREAT, 0777);
    printf("Give a input for the file\n");
    int n=read(0, buff, 10);
    printf("%d\n",n);
    write(old_fd, buff, n);
    int new_fd = dup2(old_fd, 7);
    printf("old fd:%d\n", old_fd);
    printf("new fd:%d\n", new_fd);
    int pin=lseek(new_fd,0,SEEK_SET);
    printf("%d\n",pin);
    int buff2_read=read(new_fd,buff2,10);
    printf("%d\n",buff2_read);
    write(1, buff2, 10);
}