//WAP to print the series 1,4,7,10,13,16,19....//
#include<stdio.h>
int main()
{
 int a,i,b=1;
printf("SERIES 1,4,7,10,13,16,19\n");
for(i=1;i<20;i+=3)
{
 printf("%d,",i);
}
 printf("\n");
 printf("*****FACTORIAL OF 5*****\n");
 for(a=1;a<=5;a++)
 b*=a;
 printf("%d\n",b);
 
 return 0;
}
