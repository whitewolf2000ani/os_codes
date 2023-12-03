#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int fd;
    char buff[100];

    fd = open("AOC_day2.1.txt", O_RDONLY);
    printf("The file descriptor is:%d\n", fd);
    int n = read(fd, buff, 50);
    write(1, buff, n);
}