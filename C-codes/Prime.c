#include<stdio.h>
int main()
{
 int rem,i;
 printf("Prime numbers from 1 to 300 are: ");
 for(i=2;i<=300;i++)
 { 
  rem=i;
  if(i%2==1)
  {
   printf("%d,",rem);
  }
 }
}
