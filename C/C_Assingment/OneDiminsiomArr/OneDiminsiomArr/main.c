//
//  main.c
//  OneDiminsiomArr
//
//  Created by aBoelghet  on 26/07/2023.
//

#include <stdio.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[100],size, i, sum = 0;
    int target;
    int target_index = 0;
    printf("Enter array size\n");
    scanf("%d",&size);
    
    printf("Enter array elements\n");
    for(i = 0; i < size; i++)
        scanf("%d",&arr[i]);
    int max = arr[0];
    int min = arr[0];
    for(i = 0; i < size; i++){
        sum += arr[i];
    }
    for(i = 0; i < size; i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    for(i = 0; i < size; i++){
        if (arr[i]<min){
            min = arr[i];
        }
    }
    printf("Enter target number \n");
    scanf("%d",&target);
    for(i = 0; i < size; i++){
        if (arr[i] == target){
            target_index = i;
        }
    }
    printf("Sum of the array = %d\n",sum);
    printf("Min of the array = %d\n",min);
    printf("Max of the array = %d\n",max);
    printf("Target index is %d\n",target_index);

    return 0;
}
