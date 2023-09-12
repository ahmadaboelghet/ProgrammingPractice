//
//  main.c
//  2dDynamicArrOfInt
//
//  Created by aBoelghet  on 02/08/2023.
//

#include <stdio.h>
#include <malloc/malloc.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
   
    int**arr;
    
    int i;
    
    arr=(int**) malloc (3*sizeof (int*));
    
    for (i=0;i<3; i++){
        arr [i]=(int*)malloc (4*sizeof (int) );
    };
    for (i=0;1<3;i++){
        free(arr[i]);
    }
    free (arr);
    return 0;
                     
}
