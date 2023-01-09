#include<stdio.h>
int main()
{int x=1,fact=1,n;
printf("factorial of num:");
scanf("%d",&n);
for(x=1;x<=n;x++)
{
	fact=fact*x;
}
printf("%d",fact);
return 0;
}
