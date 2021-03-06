#include<stdio.h>
void main()
{
 int i,a,n,t;
 printf("Enter the number for print the Table: ");
 scanf("%d",&n);
 printf("Enter which number's Table You want:");
 scanf("%d",&t);
 for(i=1;i<=n;i++)
 {
  a=i*t;
  printf("%d " "*" " %d ""= ""%d\n",t,i,a);
 }
}
