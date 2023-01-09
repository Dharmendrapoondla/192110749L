#include<stdio.h>

int main()
{ int a[5]={1,25,65,36,85};
int i,temp=0;
for(i=0;i<5/2;i++)
{

temp=a[i];
a[i]=a[5-i-1];
a[5-i-1]=temp;

}
for(i=0;i<5;i++)
{printf("%d",a[i]);
}
}
