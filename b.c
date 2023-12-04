#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(){
    int num,pow,i;
    int mul=1;
    int x=getpid();
    int y=getppid();
    printf("enter the number:\n");
    scanf("%d",&num);
    printf("enter the power:\n");
    scanf("%d",&pow);

    for(i=1;i<=pow;i++){
        mul*=num;
    }
    printf("answer:%d\n",mul);
    printf("b file pid:%d\n",x);
    printf("b file ppid:%d\n",y);
    return 50;
}