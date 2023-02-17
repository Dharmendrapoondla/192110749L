 #include <stdio.h>
#include <conio.h>
int max(int[],int);
int main()
{
	int a[]={10,5,45,12,19};
	int n=5,m;
	
	m=max(a,n);
	printf("\nMAXIMUM NUMBER IS %d",m);
	getch();
}
max(int a[],int n)
{
	int t,i;
	t=a[0];
	for(i=1;i<n;i++)
        {
		if(a[i]>t)
			t=a[i];
	}
	return(t);
}

