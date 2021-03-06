#include<stdio.h>
int main()
{
 int a,i,count=0;
 printf("The Even numbers from 1 to 500 are: \n");
 for(i=0;i<500;i++)
 {
  a=i;
  if(i%2==0)
  {
   count++;
   printf("%d,",a);
  }
 }
 printf("There are %d Even numbers in between 1 and 500",count);
}
