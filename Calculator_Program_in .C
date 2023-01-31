#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
int a,b,op,exp,base;
float ans;
char ch;
do
{
printf("\n**********CALCULATOR IN C**********\n");
printf("\n Make a choice \n");
printf("\n\n 1:Addition \t\t 2:Subtraction \n\n 3:Multiplication \t 4:Divison\n\n
5:Square \t\t\t 6:Power \n\n 7:Exit \n\n Now enter your choice: ");
scanf("%d",&op);
switch (op)
{
case 1:
printf (" You chose: Addition");
printf ("\n Enter First Number: ");
scanf (" %d", &a);
printf (" Enter Second Number: ");
scanf (" %d", &b);
ans=a+b;
printf("\n\n Addition of %d and %d is : %.2f",a,b,ans);
break;
case 2:
printf (" You chose: Subtraction");
printf ("\n Enter First Number: ");
scanf (" %d", &a);
printf (" Enter Second Number: ");
scanf (" %d", &b);
ans=a-b;
printf("\n\nSubtraction of %d and %d is : %.2f", a,b,ans);
break;
case 3:
printf (" You chose: Multiplication");
printf ("\n Enter First Number: ");
scanf (" %d", &a);
printf (" Enter Second Number: ");
scanf (" %d", &b);
ans=a*b;
printf("\n\nMultiplication of %d and %d is : %.2f", a,b,ans);
break;

case 4:
printf (" You chose: Division");
printf ("\n Enter First Number: ");
scanf (" %d", &a);
printf (" Enter Second Number: ");
scanf (" %d", &b);
ans=a/b;
printf("\n\nDivision of %d and %d is : %.2f", a,b,ans);
break;
case 5:
printf (" You chose: Square");
printf ("\n Enter First Number: ");
scanf (" %d", &a);
ans = a * a;
printf ("\n\n Square of %d number is: %.2f", a, ans);
break;
case 6:
printf (" You chose: Power");
printf("\nEnter a base number: ");
scanf("%d", &base);
printf("\nEnter an exponent: ");
scanf("%d", &exp);
ans = pow(base, exp);
printf("\n\n %.d^%d = %.2f", base, exp, ans);
break;
case 7:
printf (" You chose: Exit");
exit(0);
break;
default:
printf("Error");
break;
}
printf("\n\n **********END*********\n\n");
} while (op!=7);
return 0;
}
