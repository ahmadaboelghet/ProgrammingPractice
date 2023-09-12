//
//  main.c
//  MaxDifference
//
//  Created by aBoelghet  on 31/07/2023.
//

#include <stdio.h>
#include <stdlib.h>

int maxDistance(int arr[], int n)
{
 
    int maxD = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
 
            if (arr[i] == arr[j]) {
              
                int temp = abs(j - i);
                if (maxD>temp){
                    maxD = maxD;
                }else{
                    maxD = temp;
                }
            }
    return maxD;
}

int main(int argc, const char * argv[])
{
    int Arr[] = { 1, 2, 4, 1, 3, 4, 5, 2 , 6, 5 };
    printf("Maximum distance between two occurrences of "
           "same element in array:%d\n",
           maxDistance(Arr, 10));
    return 0;
}
