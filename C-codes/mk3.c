#include<stdio.h>
int main()
{
 int i,arr1[5];
 for(i=0;i<=5;i++)
 {
  printf("The address of arr1[%d] is %p\n",i,arr1[i]);
 }
 return 0;
}
