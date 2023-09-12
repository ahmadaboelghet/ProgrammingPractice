//
//  main.c
//  FuncCalculatePointers
//
//  Created by aBoelghet  on 01/08/2023.
//

#include <stdio.h>
#include <malloc/malloc.h>
#include <stdlib.h>


void firstway(int a, int b,int *sum, int *substract ,int* mul,int* div)
{
    
    *sum = a + b;
    *substract = a - b;
    *mul = a * b;
    if (b ==0){
        printf("invalid input");
    }else{
        *div = a / b;
    }
}

int* secondway(void)
{
    
    int a,b;
    int *temp = (int*) malloc(sizeof(int) * 3);
 
    printf("Enter the first number in second way:");
    scanf("%d",&a);
    printf("Enter the second number in second way:");
    scanf("%d",&b);
    temp[0] = a+b;
    temp[1] = a-b;
    temp[2] = a*b;
    if (b ==0){
        printf("invalid input");
    }else{
        temp[3] = a/b;
    }
    return temp;
}
int main(int argc, const char * argv[])
{
    int a , b,sum,substract,mult,div;
    printf("Enter the first number in first way:");
    scanf("%d",&a);
    printf("Enter the second number in first way:");
    scanf("%d",&b);
    firstway(a, b,&sum, &substract,&mult,&div);
    printf("sum = %d, substract = %d, multiply = %d, div = %d\n", sum, substract, mult,div);

    int *arr = secondway();
    
    printf("sum = %d, substract = %d, multiply = %d, div = %d\n", arr[0], arr[1], arr[2],arr[3]);

    
    return 0;
}
