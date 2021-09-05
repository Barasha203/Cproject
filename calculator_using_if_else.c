#include <stdio.h>
#include <math.h>

int main()
{
    char operator;
    double a, b;
    printf("Enter the operartor:\t\t");
    scanf("%c", &operator);
    printf("Enter the first number:\t\t");
    scanf("%lf", &a);
    printf("Enter the second number:\t");
    scanf("%lf", &b);
    if (operator=='+')
    {
        printf("sum is %lf + %lf = %lf",a,b, a+b);
    }
    else if (operator=='-')
    {
        printf("Subtraction is %lf + %lf = %lf",a,b, a-b);
    }
    else if (operator=='*')
    {
        printf("Multiplication is %lf x %lf = %lf",a,b, a*b);
    }
    else if (operator=='/')
    {
        printf("Division is %lf / %lf = %lf",a,b, a/b);
    }
    else if (operator=='^')
    {
        printf("%lf to the power %lf is %lf",a,b, pow(a,b));
    }
    else
    {
        printf("Operator unidentified");
    }
    return 0;
}