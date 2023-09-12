//
//  main.c
//  StringReverse
//
//  Created by aBoelghet  on 31/07/2023.

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    char str1[50], temp;
    int i = 0, j =0;
    printf ("Enter a string to be reversed: \n");
    scanf( "%s", str1);
    j = strlen (str1) - 1;
    while ( i < j)
    {
        temp = str1[j];
        str1[j] = str1[i];
        str1[i] = temp;
        i++;
        j--;
    }
    printf ("The reversed of the string: %s\n", str1);
    return 0;
}
