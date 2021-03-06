//Do this problem through another method also//

#include<stdio.h>
int main()
{
 int num,r,temp,sum;
 printf("Armstrong numbers are: "); 
 for(num=0;num<=500;num++)
 {
  temp=num;
  sum=0;
  while(temp!=0)
  {
   r=temp%10;
   temp=temp/10;
   sum=sum+(r*r*r);
  }
  if(sum==num)
  printf("%d,",num);
 }
 return 0;
}
