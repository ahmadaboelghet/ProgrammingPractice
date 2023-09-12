//
//  main.c
//  StudenNames
//
//  Created by aBoelghet  on 01/08/2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here..
    int i, n;
    char name[20][80];
    
    printf("Enter the number of students: ");
    scanf("%d",&n);
    
    for(i=0; i<n; i++)
    {
        printf("Enter student name %d: ", i+1);
        scanf("%s",name[i]);
    }
    
    printf("\nThe names of the students are:\n");
    for(i=0; i<n; i++)
        printf("name[%d] = \"%s\"\n", i, name[i]);
    
    return 0;
}
