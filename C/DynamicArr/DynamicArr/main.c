//
//  main.c
//  DynamicArr
//
//  Created by aBoelghet  on 01/08/2023.
//

#include <stdio.h>
#include <malloc/malloc.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int size,i;
    int* ptr;
    int sum = 0;
    printf("Please enter the size: \n");
    scanf("%d",&size);
    
    ptr = (int*)malloc(size * sizeof(int));
    
    
    for(i=0;i<size;i++){
        printf("Enter the arr elemnets number %d:",i+1);
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<size;i++){
        printf("%d ",ptr[i]);
        sum+= ptr[i];
    }
    printf("The sum of array is %d",sum);

    printf("\n");
    free(ptr);
    return 0;
}
