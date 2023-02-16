#include<stdio.h>
int main()
{ int n,i,rem,sum=0;
printf("enter a number:");
scanf("%d",&n);
for(i=1;i<=n/2;i++)
{ 
if(n%i==0){sum=sum+i;}

}if(n==sum)
printf("it ia prfect numbr%d",n);

else
printf("it ia not prfect numbr%d");

}