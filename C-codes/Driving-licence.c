//#include<stdio.h>
//int main()
//{
// int req;
// printf("Enter 1 if You are Married: \n");
// printf("Enter 2 if You are Unmarried, Male and Above 30 years of age : \n");
// printf("Enter 3 if You are Unmarried, Female and Above 25 years of age : \n");
// scanf("%d",&req);
// switch (req)
// {
//  case 1:
//  printf("Congratulation.. You are eligible for Licence");
//  break;
//  case 2:
//  printf("Congratulation.. You are eligible for Licence");
//  break;
//  case 3:
//  printf("Congratulation.. You are eligible for Licence");
//  break;
//  default:
//  printf("****Invalid Input****");
//}
//}
#include<stdio.h>
int main()
{
 int martial,sex;
 int age;
 printf("Enter 1 if You are Married: \n");
 printf("Enter 2 if you are Unmarried: \n");
 scanf("%d",&martial);
 printf("Enter Sex: \n");
 printf("Enter 1 for Male\n");
 printf("Enter 2 for Female\n");
 scanf("%d",&sex);
 printf("Enter Your Age: \n");
 scanf("%d",&age);
 if(martial==1)
 {
  printf("Congratulations you are eligible for licence.....\n");
 }
  else if(martial==2 && sex==1 && age>30)
  {
   printf("Congratulations you are eligible for licence.....\n");
  }
  else if(martial==2 && sex==2 && age>25)
  {
   printf("Congratulations you are eligible for licence.....\n");
  }
  else
  {
   printf("You Are Not Elligible for Driving Licence or You Have Entered Wrong Input");
  }
 }
