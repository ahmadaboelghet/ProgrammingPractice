//
//  main.c
//  ArrSumFun
//
//  Created by aBoelghet  on 31/07/2023.
//
#include <stdio.h>
 
int sumofarray(int a[],int n);

int main(int argc, const char * argv[])
{
    int i,n,sum;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
 
    sum=sumofarray(arr,n);
    printf("sum of array is :%d",sum);
 
    
}

int sumofarray(int arr[],int n)
{
    int i,sum=0;

   for(i=0; i<n; i++)
   {
        sum+=arr[i];
        
   }
    return sum;
}
