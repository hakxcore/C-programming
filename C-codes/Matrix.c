#include<stdio.h>
int main()
{
 int i,j,k,a[50][50],b[50][50],sum[50][50],mul[50][50],r,c;
 printf("-->Enter the no of rows of the Matrix: ");
 scanf("%d",&r);
 printf("-->Enter the no of columns of the Matrix: ");
 scanf("%d",&c);
 printf("-->Enter the Elements in matrix A\n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("Enter the element A%d%d: ",i+1,j+1);
   scanf("%d",&a[i][j]);
  }
 }
 printf("-->Enter the Elements in matrix B\n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("Enter the element B%d%d: ",i+1,j+1);
   scanf("%d",&b[i][j]);
  }
 }
 //if() 
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   sum[i][j]=a[i][j]+b[i][j];
  }
 }
 printf("-->Elements of A\n");
 for(i=0;i<c;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("%d ",a[i][j]);
   if(j==c-1)
   printf("\n\n");
  }
 } 
  printf("-->Elements of B\n");
 for(i=0;i<c;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("%d ",b[i][j]);
   if(j==c-1)
   printf("\n\n");
  }
 } 
 printf("-->Sum of two Matrices are: \n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("%d ",sum[i][j]);
   if(j==c-1)
   printf("\n\n");
  }
 }
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   mul[i][j]=0;
   for(k=0;k<c;k++)
   {
    mul[i][j]+=a[i][k]*b[k][j];
   }
  }
 }
 printf("-->Multiplication of Matrix are:\n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("%d ",mul[i][j]);
   if(j==c-1)
   printf("\n\n");
  }
 }
}
