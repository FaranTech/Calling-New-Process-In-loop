#include<stdio.h>
#include<stdlib.h>
int main()
{
for(int i=0;i<4;i++)
{fork();
printf("hello\n");
}
printf("Exit\n");
return 0;
}
