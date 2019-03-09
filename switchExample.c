#include <stdio.h>
//#include "gfx2.h"
#include <stdlib.h>
//#include "lab1-p2-letterLib.c"
#define SIZE 80

//void drawText(char string)

int main(void)
{
    char userString[SIZE];
    
    
    printf("%s", "Enter a single word, type 'exit' to end program, 'clear' to clear graphics:\n");
    scanf("%s", userString);
    
    //drawText(char string);
    printf("\nThe word entered was: %s\n", userString);
    
    int i = 0;
    while (userString[i] != '\0')
    {   
    
    for( i=0; i < SIZE; i++ ) {
    
    switch (userString[i]) {
            
        case "clear":
        case "Clear":
            something();
            break;
        
        case "exit":
        case "Exit":
            something();
            break;
        
        case 'A':
        case 'a':
            something();
            break;
            
        case 'B':
        case 'b':
            something();
            break;
            
        case 'C':
        case 'c':
            something();
            break;
            
        case 'D':
        case 'd':
            something();
            break;
            
        case 'E':
        case 'e':
            something();
            break;
            
        case 'F':
        case 'f':
            something();
            break;
            
        case 'G':
        case 'g':
            something();
            break;
            
        case 'H':
        case 'h':
            something();
            break;
            
        case 'I':
        case 'i':
            something();
            break;
            
        case 'J':
        case 'j':
            something();
            break;
            
        case 'K':
        case 'k':
            something();
            break;
            
        case 'L':
        case 'l':
            something();
            break;
            
        case 'M':
        case 'm':
            something();
            break;
            
        case 'N':
        case 'n':
            something();
            break;
            
        case 'O':
        case 'o':
            something();
            break;
            
        case 'P':
        case 'p':
            something();
            break;
            
        case 'Q':
        case 'q':
            something();
            break;
            
        case 'R':
        case 'r':
            something();
            break;
            
        case 'S':
        case 's':
            something();
            break;
            
        case 'T':
        case 't':
            something();
            break;
            
        case 'U':
        case 'u':
            something();
            break;
            
        case 'V':
        case 'v':
            something();
            break;
            
        case 'W':
        case 'w':
            something();
            break;
            
        case 'X':
        case 'x':
            something();
            break;
            
        case 'Y':
        case 'y':
            something();
            break;
            
        case 'Z':
        case 'z':
            something();
            break;
            
        }//end switch
    }//end for
    
    }//end while    

}//end main
