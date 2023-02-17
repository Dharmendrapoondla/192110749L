#include<stdio.h>
#include<string.h>
int main()
{ char str1[25],str2[25];
printf("enter a string 1:");
gets(str1);

strcpy(str2,str1);

printf("%s\n",str1);

printf("%s",str2);
}
