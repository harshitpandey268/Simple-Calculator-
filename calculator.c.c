#include<stdio.h>
int main()
{
    char operator;
    double first, second;
    printf("Enter the operator(+,-,*,/):");
    scanf("%c", &operator);

    printf("Enter any two numbers one by one:")
    scanf("%lf %lf", &first,&second);

    switch(operator)
    {

    case'+':
        printf("%.2lf + %.2lf = %.2lf ",first, second,(first+second));
        break;
    case'-':
        printf("%.2lf - %.2lf = %.2lf ",first, second,(first-second));
        break;
    case'*':
        printf("%.2lf * %.2lf = %.2lf ",first, second,(first*second));
        break;
    case'/':
        if(second != 0.0)
            printf("%.2lf / %.2lf = %.2lf ",first, second,(first/second));
        else
            printf("divide by zero situation")
        break;

    default:
        printf("%c is an invalid operator",operator);

    }

    return 0;
}



