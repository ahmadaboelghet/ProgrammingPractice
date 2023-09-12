//
//  main.c
//  FactorialFun
//
//  Created by aBoelghet  on 31/07/2023.
//

#include <stdio.h>

int factorialofnum(int num);
int main(int argc, const char * argv[])
{
    int number,factorial;
   
    printf("Enter the nuber : \n");
    scanf("%d", &number);
    
    factorial=factorialofnum(number);
    printf("factorial of number is :%d\n",factorial);
 
    
}

int factorialofnum(int num)
{
    int i,factorial = 1;
    for(i=1; i<=num; i++)
    {
        factorial *= i;
        
    }
    return factorial;
}
