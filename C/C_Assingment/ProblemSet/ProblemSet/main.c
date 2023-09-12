//
//  main.c
//  ProblemSet
//
//  Created by aBoelghet  on 29/07/2023.
//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    char s[100];
//    printf("PLease enter the input string:\n");
//    scanf("%[^\n]%*c", &s);
//    printf("Hello, World!\n%s",s);
//    return 0;
//}
//
//
//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//#include <stdlib.h>
//
//int main(int argc, const char * argv[])
//{
//    int num1,num2;
//    float num3,num4;
//    printf("PLease enter the input two integers:\n");
//    scanf("%d\n%d", &num1,&num2);
//    printf("PLease enter the input two floats:\n");
//    scanf("%f\n%f", &num3,&num4);
//    printf("%d %d\n",num1 + num2,num1 - num2);
//    printf("%.1f %.1f\n",num3 + num4, num3 -num4);
//
//    return 0;
//}
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main(int argc, const char * argv[])
{

    int num;
    scanf("%d",&num);
    if (num >=1 && num <=9){
        switch(num){
            case 1:
                printf("one\n");
                break;
            case 2:
                printf("two\n");
                break;
            case 3:
                printf("three\n");
                break;
            case 4:
                printf("four\n");
                break;
            case 5:
                printf("five\n");
                break;
            case 6:
                printf("six\n");
                break;
            case 7:
                printf("seven\n");
                break;
            case 8:
                printf("eight\n");
                break;
            case 9:
                printf("nine\n");
                break;
        }
    }else{
        printf("Greater than 9\n");

    }
    

    return 0;
}


