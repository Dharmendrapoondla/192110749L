#include<stdio.h>
int main()
{ int i,j;
printf("enter the table:");
scanf("%d",&i);
for(j=1;j<=10;j++)
printf("%d*%d=%d\n",j,i,j*i);
}
