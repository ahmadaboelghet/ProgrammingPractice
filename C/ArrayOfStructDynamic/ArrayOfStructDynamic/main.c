//
//  main.c
//  ArrayOfStructDynamic
//
//  Created by aBoelghet  on 02/08/2023.
//

#include <stdio.h>
#include <malloc/malloc.h>
#include <stdlib.h>

struct emp{
    int id;
    char name[20];
    int age;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    int size;
    scanf("%d",&size);
//    int* ptr = (int*)malloc (size*sizeof (int));
    struct emp* ptr= (struct emp*) malloc(size* sizeof (struct emp));
                                            
    for (int i=0;i<3;i++) {
        scanf ("%d" ,&ptr[i].id);
        scanf ("%s" ,ptr [i].name) ;
        scanf ("%d", &ptr [i].age);
    }
    for (int i=0;1<3;i++) {
        printf ("In %d:%s:%d",ptr[i].id,ptr[i].name, ptr[i].age);
        
    }
    return 0;
}
