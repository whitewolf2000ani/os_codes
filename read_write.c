#include<stdio.h>
#include<unistd.h>

int main(){
    char buff[20];
    int n=read(0,buff,20);
    int m=write(1,buff,20);
    printf("%d %d",m,n);
}