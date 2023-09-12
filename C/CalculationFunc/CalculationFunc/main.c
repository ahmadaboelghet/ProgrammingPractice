//
//  main.c
//  CalculationFunc
//
//  Created by aBoelghet  on 31/07/2023.
//

#include <stdio.h>

void calculate(int num1,int num2,char op);

int main(int argc, const char * argv[]) {
    int num1,num2;
    char op;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%d %d", &num1, &num2);
    calculate(num1, num2, op);

    return 0;
}
void calculate(int num1,int num2,char op){
    switch(op){
        case '+':
            printf("Sum is %d\n",num1 + num2);
            break;
        case '-':
            printf("Substract is %d\n",num1 - num2);
            break;
        case '*':
            printf("Multiply is %d\n",  num1 * num2);
            break;
        case '/':
            if (num2 == 0){
                printf("Invalid input\n");
            }else{
                printf("Division is %d\n",  num1 / num2);
            }
            break;
        default:
            printf("Invalid operater input\n");
            
    }
}
