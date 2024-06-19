#include<stdio.h>
int main(){

    char operator;
    double num1;
    double num2;
    double result;

    printf("enter ur operator (+ - * /): \n ");
    scanf("%c",&operator);

    printf("enter number 1: ");
    scanf("%lf",&num1);

    printf("enter number 2: ");
    scanf("%lf",&num2);

    switch(operator){
        case '+':
        result = num1 + num2;
        printf("result is : %.2lf",result);
        break;

        case '-':
        result = num1 - num2;
        printf("result is : %.2lf",result);
        break;

        case '*':
        result = num1 * num2;
        printf("result is : %.2lf",result);
        break;

        case '/':
        result = num1 / num2;
        printf("result is : %.2lf",result);
        break;

        default:
        printf("%c is not a valid operator",operator);

    }

    return 0;




}