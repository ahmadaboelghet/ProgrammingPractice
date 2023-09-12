//
//  main.c
//  FullNameConcatenate
//
//  Created by aBoelghet  on 28/07/2023.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    char firstname[10];
    char lastname[10];
    char fullname[20];
    printf("Please enter the first name:\n");
    scanf("%s",firstname);
    printf("Please enter the last name:\n");
    scanf("%s",lastname);
    strcpy(fullname,firstname);
    strcat(fullname," ");
    strcat(fullname,lastname);
    printf("The full name is %s\n",fullname);
    
    return 0;
}
