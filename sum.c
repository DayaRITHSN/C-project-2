#include <stdio.h>
addnumber()
{
   int num1, num2, sum;
   printf("\n Enter first number: ");
   scanf("%d", &num1);
   printf("Enter second number: ");
   scanf("%d", &num2);

   sum = num1 + num2;
   printf(" Sum of the entered numbers: %d", sum);
   // return 0;
}
