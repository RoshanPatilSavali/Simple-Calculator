
#include<stdio.h>
int main()
{
    float number01, number02;
    char op,choice;
    do {
        printf("Enter the value of number 01:");
        scanf("%f",&number01);
        printf("Enter the value of  number 02:");
        scanf("%f",&number02);
        printf("Enter operation would you like to perform:\n");
        printf("Enter operation:");
        scanf(" %c",&op);
        switch(op)
        {
            case '+':
            printf("Result = %f\n",number01+number02);
            break;
            case '-':
            printf("Result = %f\n",number01-number02);
            break;
            case '*':
            printf("Result = %f\n",number01*number02);
            break;
            case '/':
            if(number02 != 0)
            printf("Result = %f\n",number01/number02);
            else
            printf("ERROR, You cannot used 0 in denominator\n");
            break;
            default:
            printf("WRONG operation");
            break;
        }
        printf("Would you like perform another operation: Enter :-- y/n:--");
        scanf(" %c",&choice);
    }
    while(choice == 'y'|| choice =='Y');
    printf("|||   Thankyou for using calculator   |||");
    return 0;
}
