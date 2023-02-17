#include<stdio.h>
int main()
{int a[100],i,n,sum=0,k;
n=sizeof(a)/sizeof(a[0]);
scanf("%d",&k);
for(i=0;i<k;i++)
scanf("%d",&a[i]);
for(i=0;i<k;i++)
sum=sum+a[i];

printf("%d",sum);
}