#include<stdio.h>
int main()
{
 int a,b,c;
 printf("Enter the Ages of Rahul, Mohan and Sohan : ");
 scanf("%d%d%d",&a,&b,&c);
 printf("Age of Rahul: %d\n",a);
 printf("Age of Mohan: %d\n",b);
 printf("Age of Sohan: %d\n",c);
 if(a>b & a>c)
 {
  printf("Rahul is big in age of Mohan and Sohan\n");
 }
 else
 {
  if(b>a & b>c)
  {
   printf("Mohan is big in age of Rahul and Sohan\n");
  }
  else
  {
   printf("Sohan is big in age of Rahul and Mohan\n");
  }
 }
}
 
 
 
 
 
 
 
 
 
 
 
 // if(a>c)
//  {
//   printf("Rahul is big in age of Mohan and Sohan");
//  }
//  else
//  {
 //  if(b>a)
 //  { 
    
 
