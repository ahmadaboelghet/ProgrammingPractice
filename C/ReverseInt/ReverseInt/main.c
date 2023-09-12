//
//  main.c
//  ReverseInt
//
//  Created by aBoelghet  on 01/08/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
      remainder = n % 10;
      reverse = reverse * 10 + remainder;
      n /= 10;
    }

    printf("Reversed number = %d\n", reverse);
    return 0;
}
