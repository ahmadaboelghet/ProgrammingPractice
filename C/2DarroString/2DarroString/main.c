//
//  main.c
//  2DarroString
//
//  Created by aBoelghet  on 02/08/2023.
//

#include <stdio.h>
#include <malloc/malloc.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    char **arr;
    
    int i;
    
    arr =(char**) calloc (3,sizeof (char*));
    
    for (i=0;i<3; i++){
        arr[i] = (char*) calloc(3, sizeof(char));

    };
    for (i=0;1<3;i++){
        free(arr[i]);
    }
    free (arr);
    
    return 0;
    
    
}
