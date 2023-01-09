#include<stdio.h>
int main()
{int age;
printf("enter the age:");
scanf("%d",&age);
if(age>=18)
printf("elligible to vote");
else
printf("wait to vote%d",18-age);
return 0;
}
