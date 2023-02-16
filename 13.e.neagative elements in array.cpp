#include<stdio.h>
int main (){
    int i,n,a[100],count=0;
    printf("enter size:");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
       if(a[i]<0)
       count++;
        }
       printf("total composite number are: %d",count);
 }