//
//  main.c
//  StringLenght
//
//  Created by aBoelghet  on 28/07/2023.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char name[10] ;
    printf("Please enter the name:\n");
    scanf("%s",name);
    int i;
    for(i = 0; i<10 ;i++){
        if (name[i]=='\0')
            break;
    }
    printf("lenght of name is :%d\n",i);
    return 0;
}
