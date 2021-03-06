#include<stdio.h>
#include<stdlib.h>
#include <limits.h>

int len,data[]={};
void Acceepy_Data(int initial)
{
 int i;
 printf("Enter the number of elements to be sorted: ");
 scanf("%d",&len);
 if(initial==1)
 {
  ++len;
  printf("Enter the Elements: ");
  for(i=initial;i<len;i++)
  scanf("%d",&data[i]);
 }
void Display(int initial)
{
 int i;
 for(i=initial;i<len;i++)
 printf("%d",data[i]);
}
void Insertion_Sort ()
{
 int i,ptr,temp;
 data[0]=INT_MIN;
 for(i=2;i<len;i++)
 {
  temp=data[i];
  ptr=i-1;
  if(temp<data[ptr])
  {
   while(temp<data[ptr])
   {
    data[ptr+1]=data[ptr];
    --ptr;
   }
   data[++ptr]=temp;
  }
 }
 return;
 }
 void Selection_Sort ()
 {
  int i,j,min,temp,loc;
  for(i=0;i<len;i++)
  {
   min=data[i];
   loc=i;
    for(j=i+1;j<len;j++)
   {
   if(min>data[j])
   { 
    min=data[j];
    loc=j;
   }
  }
  temp=data[i];
  data[i]=min;
  data[loc]=temp;
 }
}
}
