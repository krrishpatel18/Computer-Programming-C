#include <stdio.h>
#include <conio.h>
int main ()
{
int num1,num2,choice,result;

printf("enter two integers:");
scanf ("%d %d",&num1,&num2);

printf ("choose an operation:\n");
printf ("1. Addition\n");
printf ("2. Subtraction\n");
printf ("3. Multiplication\n");
printf ("4. Division\n");
printf ("Enter your choice (1-4):");
scanf ("%d",&choice);

switch(choice)
{
case 1:
    result = num1+num1;
    printf ("Result = %d\n",result);
    break;
case 2:
    result = num1 - num2;
    printf("Result = %d\n",result);
    break;
case 3:
    result = num1 * num2;
    printf("Result = %d\n",result);
    break;
case 4:
    if(num2 !=0)
    {
        result = num1/num2;
        printf ("Result = %d\n",result);
    }
    else
    {
        printf ("Division by zero is not allowed\n");
    }
    break;
default:
    printf("invalid choice.\n");
    break;
}
return 0;
}
