#include<stdio.h>
int main()
{
	int a,b,*p,*f,sum=0;
	printf("enter two numbers input:");
	scanf("%d%d",&a,&b);
	p=&a;
	f=&b;
	 
	sum=(a+b);
	printf("%d",sum);
}