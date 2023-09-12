//
//  main.c
//  WordScount
//
//  Created by aBoelghet  on 31/07/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    
    char s[200];
    int wordCount = 0,charCount = 0, i;
    
    printf("Enter the string:\n");
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' '){
            wordCount++;
        }else if(s[i] != ' ' && s[i] != '\n'){
            charCount++;
        }
    }
    printf("Number of characters in given string are: %d\n", charCount);
    printf("Number of words in given string are: %d\n", wordCount + 1);
    
    return 0;
}
