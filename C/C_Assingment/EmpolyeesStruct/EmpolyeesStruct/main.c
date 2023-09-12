//
//  main.c
//  EmpolyeesStruct
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
    struct emp arr[5];
    for(int i = 0; i< 5; i++){
        printf("Please enter the emoply number %d id:\n",i+1);
        scanf("%d",&arr[i].id);
        printf("Please enter the emoply number %d age:\n",i+1);
        scanf("%d",&arr[i].age);
        printf("Please enter the emoply number %d name:\n",i+1);
        scanf("%s",arr[i].name);
        printf("Please enter the emoply number %d salary:\n",i+1);
        scanf("%d",&arr[i].salary);
    }
    for(int i = 0; i< 5; i++){
        printf("The emoply number %d id is: %d, age is: %d, name is: %s, salary is: %d\n",i+1,arr[i].id,arr[i].age,arr[i].name,arr[i].salary);

    }
    
    return 0;
}
