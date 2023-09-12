//
//  main.c
//  StructPointerValue
//
//  Created by aBoelghet  on 02/08/2023.
//

#include <stdio.h>

struct emp{
    int id;
    char name[20];
    int age;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    struct emp el;
    printf("Enter employee id: \n");
    scanf("%d", &el.id);
    printf("Enter First Name: \n");
    scanf("%s", el.name);
    printf("Enter age: \n");
    scanf("%d", &el.age);
    struct emp* ptr= &el;
    
    printf("%d:%s:%d\n", el.id, el. name, el.age);
    
    printf ("In %d:%s: %d\n", (*ptr). id, (*ptr) . name, (*ptr) .age);
    
    return 0;
}
