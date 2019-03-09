#include <stdio.h>
#include <stdlib.h>
#include "gfx2.h"
#include "lab1-p2-letterLib.h"
#define SIZE 100


int main()
{
    
     //sets screen size 500 x 500
	int ysize = 600;
	int xsize = 600;
    
    double userX;
    double userY;
    double userHeight;

	// Open a new window for drawing.
	gfx_open(xsize,ysize,"Example Graphics Program");

	// Set the current drawing color to red
	gfx_color(200,0,0);
	
	
    char userStringInput[100];//the array name is 'UserStringInput' and can hold 99 characters and one null termination character
           
    printf("%s", "Enter a single word in all caps:\n");// prompts user input
    scanf("%s", userStringInput);
    
    //printf("%s", "Enter a color for your string:\n");
    //scanf("%s", userColor);
    //printf("%d", "Enter a height:\n");
    //scanf("%d", userHeight);
    //printf("%d,%d", "Enter x and y coordinates:\n");
    //scanf("%d,%d", userX, userY);
    /*Introducing a prototype function called print, it's job is to print the user's input stored in array 'input'
      **the function prototype print is using a character pointer called 'string' to copy data stored in 'input' array.
      **this allows us to manipulate data in other functions without changing user input.*/
    //variable 'i' is being used as a watchdog for the null termination character '\0'.
    int i = 0;
    char c;
    while (userStringInput[i] != '\0')
    {   
        //printf("%c\n", userString[i]);//this will print each element on terminal and put a new line after each element at terminal but not as drawChar graphic
        //i++;//this will increment through each element of array 'input' and copy data to 'string'
    
    //this for statement checks each character in userStringInput and implements the character to the cases in switch statement
    for( i=0; i < SIZE; i++ ) {
    
    //tests userStringInput for each character against each case until the while statement encounters null terminator
    switch (userStringInput[i]) {
            
        
        /*case "clear":
        case "Clear":
            something();
            break;
        
        case "exit":
        case "Exit":
            something();
            break;*/
        
        case 'A':
        case 'a':
            drawCharA(0,0,100);
            break;
            
        case 'B':
        case 'b':
            drawCharB(0,0,100);
            break;
            
        case 'C':
        case 'c':
            drawCharC(0,0,100);
            break;
            
        case 'D':
        case 'd':
            drawCharD(0,0,100);
            break;
            
        case 'E':
        case 'e':
            drawCharE(15,15,30);
            break;
            
        case 'F':
        case 'f':
            drawCharF(0,0,100);
            break;
            
        case 'G':
        case 'g':
            drawCharG(0,0,100);
            break;
            
        case 'H':
        case 'h':
            drawCharH(0,0,100);
            break;
            
        case 'I':
        case 'i':
            drawCharI(0,0,100);
            break;
            
        case 'J':
        case 'j':
            drawCharJ(0,0,100);
            break;
            
        case 'K':
        case 'k':
            drawCharK(0,0,100);
            break;
            
        case 'L':
        case 'l':
            drawCharL(0,0,100);
            break;
            
        case 'M':
        case 'm':
            drawCharM(0,0,100);
            break;
            
        case 'N':
        case 'n':
            drawCharN(0,0,100);
            break;
            
        case 'O':
        case 'o':
            drawCharO(0,0,100);
            break;
            
        case 'P':
        case 'p':
            drawCharP(0,0,100);
            break;
            
        case 'Q':
        case 'q':
            drawCharQ(10,10,30);
            break;
            
        case 'R':
        case 'r':
            drawCharR(20,20,30);
            break;
            
        case 'S':
        case 's':
            drawCharS(0,0,100);
            break;
            
        case 'T':
        case 't':
            drawCharT(25,25,30);
            break;
            
        case 'U':
        case 'u':
            drawCharU(0,0,100);
            break;
            
        case 'V':
        case 'v':
            drawCharV(0,0,100);
            break;
            
        case 'W':
        case 'w':
            drawCharW(15,15,30);
            break;
            
        case 'X':
        case 'x':
            drawCharX(0,0,100);
            break;
            
        case 'Y':
        case 'y':
            drawCharY(30,30,30);
            break;
            
        case 'Z':
        case 'z':
            drawCharZ(0,0,100);
            break;
        
        case '0':
            drawChar0(0,0,100);
            break;
            
        case '1':
            drawChar1(0,0,100);
            break;
            
        case '2':
            drawChar2(0,0,100);
            break;
            
        case '3':
            drawChar3(0,0,100);
            break;
            
        case '4':
            drawChar4(0,0,100);
            break;
            
        case '5':
            drawChar5(0,0,100);
            break;
            
        case '6':
            drawChar6(0,0,100);
            break;
            
        case '7':
            drawChar7(0,0,100);
            break;
        
        case '8':
            drawChar8(0,0,100);
            break;
            
        case '9':
            drawChar9(0,0,100);
            break;
            
        /*case '$':
            drawChar$(0,0,100);
            break;
            
        case '!':
            drawChar!(0,0,100);
            break;
            
        case '?':
            drawCharQuestion(0,0,100);
            break;
        
        case '#':
            drawChar#(0,0,100);
            break;*/
            
        default:
        drawMissingLetter(50,50,50);
        break;
            
                    
        }//end switch
    }//end for
    
    // Wait for the user to press a character.
		c = gfx_wait();

		// Quit if it is the letter q.
		if(c=='q') break;
	}//End while	 
	
      		
	
} //End main function
