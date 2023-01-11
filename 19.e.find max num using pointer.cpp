#include<stdio.h>
int main()
{
int a,b;
int *p1,*p2;
printf("enter two number ");
scanf("%d%d",&a,&b);
p1=&a;
p2=&b;
if(*p1>*p2)
 {
 printf("big number %d\n",*p1);
 }
else
 {
 printf("  big num %d",*p2);
 }
 return 0;
}
