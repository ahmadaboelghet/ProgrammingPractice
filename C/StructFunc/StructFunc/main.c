//
//  main.c
//  StructFunc
//
//  Created by aBoelghet  on 31/07/2023.
//

#include <stdio.h>

struct student {
   char name[50];
   int age;
};

void display(struct student s);
struct student getDetail(void);

int main(int argc, const char * argv[]) {
   struct student s1;

    s1 = getDetail();
    display(s1);

    return 0;
}
struct student getDetail(void) {
    
  struct student s;
  
  printf("Enter First Name: \n");
  scanf("%s", s.name);
  printf("Enter age: \n");
  scanf("%d", &s.age);

  return s;
}
void display(struct student s) {
    
    printf("\nDisplaying information\n");
    printf("Name: %s", s.name);
    printf("\nAge: %d\n", s.age);
}

