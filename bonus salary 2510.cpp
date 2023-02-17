#include<stdio.h>
int main(){
char grade;
  int sal , bon ,tot;
  printf("ENTER THE SALARY:");
  scanf("%d",&sal);
  if(sal<10000){
     bon=sal*2/100;
     tot=sal+bon;
     printf("\n%d",sal);
     printf("\n%d",bon);
     printf("\n%d",tot);
    }
    else
    printf("enter the grade:");
    scanf("%s",&grade);{
	if(grade=='a'||grade=='A')
    {
	bon=sal*5/100;
    tot=sal+bon;
    printf("\n5%d",sal);
    printf("\n%d",bon);
    printf("\n%d",tot);
    }
   else if(grade=='b'||grade=='B')
   {bon=sal*10/100;
    tot=sal+bon;
    printf("\n%d",sal);
    printf("\n%d",bon);
    printf("\n%d",tot);
   }
   else {
     printf("enter in valid grade");
    }
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
} 