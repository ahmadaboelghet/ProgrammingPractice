//
//  main.c
//  StringLenghtFunc
//
//  Created by aBoelghet  on 31/07/2023.
//

#include <stdio.h>

int lenghtofstring(char arr[],int n);

int main(int argc, const char * argv[])
{
    int stringlenght;
    char name[10];
    printf("Enter size of the string : ");
    scanf("%s", name);
    stringlenght=lenghtofstring(name,10);
    printf("String lenght :%d\n",stringlenght);
 
    
}

int lenghtofstring(char arr[],int n)
{
    int i;
    for(i = 0; i<n ;i++){
        if (arr[i]=='\0')
            break;
    }
    return i;
}
