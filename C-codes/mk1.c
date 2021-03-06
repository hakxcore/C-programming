#include<stdio.h>
int main()
{
 int a,b;
 int c;
 float d,e;
 printf("Enter the two number: ");
 scanf("%d%d",&a,&b);
 c=a+b;
 printf("Arthimatic sum of Entered numbers are: %d+%d=%d \n\n\n",a,b,c);
 printf("------CONDITIONAL STATEMENTS---------\n");
 printf("1.if.\n");
 if (a>b) 
 {
  printf("%d is greater then %d \n",a,b);
 }
 else
 {
  printf("%d is greater than %d \n",b,a);
 }
 printf("  ");
 printf(" \n2.nested if else. \n");
if(a>10)
{
 if(b<a)
 {
  d=a/b;
  printf(" division of %d is %f \n",a,d);
 }
 else
 {
  e=b/a;
  printf(" Division of %d is %f \n",b,e);
 }
}
 else
 {
  printf("%d is not bigger than 10 *condition not satisfied*  \n",a );
 }
 printf("  ");
 printf("*************SWITCH STATEMENT************** \n");
 printf("Statement 1\n");
 switch (d) 
 {
  case int:
  printf("Your number is integer type\n");
  break;
  case float:
  printf("Your number is float type\n");
  break;
  default:
  printf("Another type of data\n");
 }
 printf("Statment 2\n");
 switch (e)
 {
  case float:
  printf("Your number is float type\n");
  break;
  case int:
  printf("Your number is integer type\n");
  break;
  default:
  printf("Another data type\n");
 }
 return 0;
}



//In order to create your own custom objects, you must first create the corresponding classes. This is accomplished by right clicking on the src folder in Eclipse and selecting Create->New->Class. Give your class a name and click Finish to add the new class to your project//