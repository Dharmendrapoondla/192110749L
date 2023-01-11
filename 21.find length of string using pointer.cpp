#include<stdio.h>
int main()
{ char str[25];
int i=0;
 char *pt;
printf("enter a string:");
gets(str);
pt=str;
while(*pt!='\0')
{i++;
pt++;
}
printf("length of string%d",i);
}
