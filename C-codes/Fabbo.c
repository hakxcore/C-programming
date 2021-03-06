#include<stdio.h>
int main()
{
  int i,a,b,c,n;
  printf("Enter a Number to print The Fabbonacci Series: ");
  scanf("%d",&n);
  printf("FABBONACCI SERIES:");
  a=0;
  b=1;
  
  for(i=2;i<=n;i++)
  {
   c=a+b;
   printf("%d,",c);
   a=b;
   b=c;
  }
 }
