//
//  main.c
//  StudentName
//
//  Created by aBoelghet  on 28/07/2023.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char students[4][10];
    printf("Please enter ITI iOS Round Students names :\n");
    for(int i = 0 ; i<4; i++){
        scanf("%s",students[i]);
        
    }
    for(int i = 0 ; i<4; i++){
        printf("Student name is %s\n", students[i]);
        
    }
    
    return 0;
}
