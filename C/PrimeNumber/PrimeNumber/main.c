//
//  main.c
//  PrimeNumber
//
//  Created by aBoelghet  on 31/07/2023.
//

#include <stdio.h>

int checkPrime(int num);
void allPrimenumbersin(int rangeEnd);

int main(int argc, const char * argv[]) {
    // insert code here...
    int rangeEnd;
    printf("Enter tne number represent end of range: \n");
    scanf("%d",&rangeEnd);
    allPrimenumbersin(rangeEnd);
    return 0;
}

void allPrimenumbersin(int rangeEnd){
    for(int i=3; i <= rangeEnd; i++){
        if(checkPrime(i))
            printf("%d ",i);
    }
}


int checkPrime(int num)
{
    if(num < 2){
        return 0;
    }
    else{
    
        for(int i = 2; i < num/2; i++)
        {
            if(num % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}
