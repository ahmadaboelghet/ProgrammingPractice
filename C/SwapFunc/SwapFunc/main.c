//
//  main.c
//  SwapFunc
//
//  Created by aBoelghet  on 01/08/2023.
//

#include <stdio.h>

void swap(int var1,int var2);
void swapbyaddress(int * var1,int* var2);

int main(int argc, const char * argv[]) {
    // insert code here...
    int var1, var2;
    printf("Enter two integersn: \n");
    scanf("%d%d", &var1, &var2);
    printf("Before SwappingnFirst variable = %d Second variable = %d \n", var1, var2);
    swap(var1, var2);
    swapbyaddress(&var1, &var2);
    printf("After Swappingnby addressFirst variable = %d Second variable = %d \n", var1, var2);
    return 0;
}
void swap(int var1,int var2){
    int temp;
    temp = var1;
    var1 = var2;
    var2 = temp;
    printf("After SwappingnFirst variable = %d Second variable = %d\n", var1, var2);
}
void swapbyaddress(int * var1,int* var2){
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}
void swapbyrefrence(int *& var1,int *& var2){
    int temp = var1;
    var1 = var2;
    var2 = temp;
}

