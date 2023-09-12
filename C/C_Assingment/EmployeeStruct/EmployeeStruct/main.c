//
//  main.c
//  EmployeeStruct
//
//  Created by aBoelghet  on 28/07/2023.
//

#include <stdio.h>

struct emp{
    int id;
    int age;
    char name[10];
    int salary;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    struct emp e1;
    printf("Please enter the emoply id:\n");
    scanf("%d",&e1.id);
    printf("Please enter the emoply age:\n");
    scanf("%d",&e1.age);
    printf("Please enter the emoply name:\n");
    scanf("%s",e1.name);
    printf("Please enter the emoply salary:\n");
    scanf("%d",&e1.salary);
    printf("The emoply id is: %d, age is: %d, name is: %s, salary is: %d\n",e1.id,e1.age,e1.name,e1.salary);


    return 0;
}
