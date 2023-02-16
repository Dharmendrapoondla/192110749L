#include<stdio.h>
int main()
{ int a[10],n,i,j,key;
printf("enter the size of array:");
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
printf("enter the key element in array:");
scanf("%d",&key);
for(j=0;j<=n;j++)
{if(a[j]==key)
{break;
}
}
if(j<n)
printf("elment inthe array%d",j);
else
printf("the element not in the array");
}