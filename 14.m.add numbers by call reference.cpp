#include <stdio.h>
int addTwoNumbers(int *, int *);
 
int main()
{
   int fno, sno, sum;
   
   printf("\n\n Pointer : Add two numbers using call by reference:\n"); 
   printf("-------------------------------------------------------\n");   
 
   printf(" Input the first number : ");
   scanf("%ld", &fno);
   printf(" Input the second  number : ");
   scanf("%ld", &sno);   
   sum = addTwoNumbers(&fno, &sno);
   printf(" The sum of %ld and %ld  is %ld\n\n", fno, sno, sum);
   return 0;
}
int addTwoNumbers(int *n1, int *n2) 
{
   int sum;
   sum = *n1 + *n2;
   return sum;
}

