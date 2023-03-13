#include<stdio.h>
int main(){

    char operation;
    printf("Choose an Operation Which Do you Want ! ( + , - , *, /)::");
    scanf("%c",&operation);
    double number1,number2;
    printf("Enter Two Operand::");
    scanf("%lf%lf",&number1,&number2);

    switch(operation){
            case '+':
            printf("Sum is::%.1lf+%.1lf=%.1lf" ,number1,number2,number1+number2);
            break;
            case '-':
            printf("Sub is::%.1lf-%.lf=%.1lf" ,number1,number2,number1-number2);
            break;
            case '*':
            printf("Mul is::%.1lf*%.lf=%.1lf" ,number1,number2,number1*number2);
            break;
            case '/':
            printf("Div is::%.1lf/%.lf=%.1lf" ,number1,number2,number1/number2);
            break;

            default:
                printf("you select wrong !  operation");

    }


    return 0;
}
