//
//  main.c
//  CheckChar
//
//  Created by aBoelghet  on 02/08/2023.
//

#include <stdio.h>
#include <curses.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char ch;
   
    ch = getch () ;
    
    if (ch==-32){
        ch=getch () ;
        printf ("extended key %d", ch) ;
    }else{
        printf ("normal key %d -%c", ch, ch) ;
    }

    return 0;
}
