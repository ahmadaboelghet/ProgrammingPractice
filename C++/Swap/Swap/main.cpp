//
//  main.cpp
//  Swap
//
//  Created by aBoelghet  on 06/08/2023.
//

#include <iostream>

void swapbyValue(int var1,int var2){
    int temp;
    temp = var1;
    var1 = var2;
    var2 = temp;
   
}
void swapbyaddress(int * var1,int* var2){
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}
void swapbyrefrence(int& var1,int& var2){
    int temp = var1;
    var1 = var2;
    var2 = temp;
}
int main(int argc, const char * argv[]) {
    // insert code here...

    int var1 = 10,var2 = 20;
    printf("Enter two integersn: \n");
    scanf("%d%d", &var1, &var2);
//    printf("Before SwappingnFirst variable = %d Second variable = %d \n", var1, var2);
//    swapbyValue(var1, var2);
//    swapbyaddress(&var1, &var2);
//    printf("After SwappingnFirst variable = %d Second variable = %d \n", var1, var2);
    swapbyrefrence(var1, var2);
    printf("After Swappingn Second TimeFirst variable = %d Second variable = %d \n", var1, var2);
   
    return 0;
}
