#include<stdio.h>
int main()
{
	int merge[100],arr1[100],arr2[100],a,b,i,k,n;
	printf("enter array 1 size:");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr1[i]);
	 merge[i]=arr1[i];
	 }
	 k=i;
	 printf("enter array 2 size:");
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{
		scanf("%d",&arr2[i]);
	 merge[k]=arr2[i];
	 k++;
	 } 
	 printf("after merging:\n"); 
	 for(i=0;i<k;i++)
	 {
	 printf("%d",merge[i]);}
	 return 0;}