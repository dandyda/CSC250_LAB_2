#include <stdio.h>
#include <stdlib.h>
#include "gfx2.h"
#include "copyLetterLib.h"
#define SIZE 80


//prototype function pulling variables from main function for its own use
void drawText(char userStringInput, double ulCornerX, double ulCornerY, double height);

int main()
{
    
 //sets screen size 800 x 800
	int ySize = 800;
	int xSize = 800;
    
    long int r, g, b;//represent user's color choices
    double ulCornerX, ulCornerY, height;//represent users's starting point and character size preferences
    char c, userStringInput[SIZE];//Initializing the array named 'UserStringInput' and can hold 99 characters and one null termination character
           
      
    printf("Enter a word:\n");// prompts user input for a string of character stored in array userStringInput
    scanf("%s", userStringInput);
    
    // ask user for the red, green and blue color combo values range 0-255
	printf("Enter the RED color value (0-255): ");
	scanf("%ld", &r);	
	printf("Enter the GREEN color value (0-255): ");
	scanf("%ld", &g);	
	printf("Enter the BLUE color value (0-255): ");
	scanf("%ld", &b);
    
    //establishes character size for graphics using user preferences
    printf("Enter a height:\n");
    scanf("%lf", &height);    
    //establishes a starting point for graphics using user preferences
    printf("Enter x starting coordinate:\n");
    scanf("%lf", &ulCornerX);    
    printf("Enter y starting coordinate:\n");
    scanf("%lf", &ulCornerY);    
    
    
    // Open a new window for drawing using previously declared integer sizes.
	gfx_open(xSize,ySize,"Graphics Letter Library");
	gfx_color(r,g,b);// Set the current drawing color to user preference
    
    
    
    while(1) {
		// Wait for the user to press a character.
		c = gfx_wait();

		// Quit if it is the letter q.
		if(c=='q') break;
	}//end while 	
	
	
      		
	
} //End main function

//prototype function called drawText()
void drawText(char* userStringInput, double ulCornerX, double ulCornerY, double height)
{
    
    char c;
    
    
	
// loop for switch statement, variable interger i is our watchdog for null terminator    
    for(int i=0; i<SIZE; i++){
    	ulCornerX += .825*height;//establishes a scalable spacing using character height for drawChar functions
    	
    //tests userStringInput for each character against each case until null terminator is encountered. Commented out cases do not exist
    //in letterLibrary function.  This allows switch selection to choose default when character missing from drawChar function is encountered.	
             
        switch (userStringInput[i]) {
                     
            /*case 'A':
            case 'a':
                drawCharA(ulCornerX,ulCornerY,height);
                break; */
            
            /*case 'B':
            case 'b':
                drawCharB(ulCornerX,ulCornerY,height);
                break; */
                
            case 'C':
            case 'c':
                drawCharC(ulCornerX,ulCornerY,height);
                break;
                
            case 'D':
            case 'd':
                drawCharD(ulCornerX,ulCornerY,height);
                break;
            
            case 'E':
            case 'e':
                drawCharE(ulCornerX,ulCornerY,height);
                break;
            
            /*case 'F':
            case 'f':
                drawCharF(ulCornerX,ulCornerY,height);
                break; */
            
            /*case 'G':
            case 'g':
                drawCharG(ulCornerX,ulCornerY,height);
                break; */
                
            case 'H':
            case 'h':
                drawCharH(ulCornerX,ulCornerY,height);
                break;
                
            case 'I':
            case 'i':
                drawCharI(ulCornerX,ulCornerY,height);
                break;
            
            case 'J':
            case 'j':
                drawCharJ(ulCornerX,ulCornerY,height);
                break;
            
            /*case 'K':
            case 'k':
                drawCharK(ulCornerX,ulCornerY,height);
                break; */
            
            case 'L':
            case 'l':
                drawCharL(ulCornerX,ulCornerY,height);
                break;
            
            case 'M':
            case 'm':
                drawCharM(ulCornerX,ulCornerY,height);
                break;
            
            case 'N':
            case 'n':
                drawCharN(ulCornerX,ulCornerY,height);
                break;
            
            /*case 'O':
            case 'o':
                drawCharO(ulCornerX,ulCornerY,height);
                break; */
            
            /*case 'P':
            case 'p':
                drawCharP(ulCornerX,ulCornerY,height);
                break; */
                
            case 'Q':
            case 'q':
                drawCharQ(ulCornerX,ulCornerY,height);
                break;
                
            case 'R':
            case 'r':
                drawCharR(ulCornerX,ulCornerY,height);
                break;
                
            case 'S':
            case 's':
                drawCharS(ulCornerX,ulCornerY,height);
                break;
                
            case 'T':
            case 't':
                drawCharT(ulCornerX,ulCornerY,height);
                break;
                
            /*case 'U':
            case 'u':
                drawCharU(ulCornerX,ulCornerY,height);
                break; */
                
            case 'V':
            case 'v':
                drawCharV(ulCornerX,ulCornerY,height);
                break;
                
            /*case 'W':
            case 'w':
                drawCharW(ulCornerX,ulCornerY,height);
                break; */
                
            /*case 'X':
            case 'x':
                drawCharX(ulCornerX,ulCornerY,height);
                break; */
                
            case 'Y':
            case 'y':
                drawCharY(ulCornerX,ulCornerY,height);
                break;
                
            case 'Z':
            case 'z':
                drawCharZ(ulCornerX,ulCornerY,height);
                break;
            
            /*case '0':
                drawChar0(ulCornerX,ulCornerY,height);
                break; */
                
            /*case '1':
                drawChar1(ulCornerX,ulCornerY,height);
                break; */
                
            case '2':
                drawChar2(ulCornerX,ulCornerY,height);
                break;
                
            /*case '3':
                drawChar3(ulCornerX,ulCornerY,height);
                break; */
                
            case '4':
                drawChar4(ulCornerX,ulCornerY,height);
                break;
                
            /*case '5':
                drawChar5(ulCornerX,ulCornerY,height);
                break; */
                
            /*case '6':
                drawChar6(ulCornerX,ulCornerY,height);
                break; */
                
            /*case '7':
                drawChar7(ulCornerX,ulCornerY,height);
                break; */
            
            case '8':
                drawChar8(ulCornerX,ulCornerY,height);
                break;
                
            /*case '9':
                drawChar9(ulCornerX,ulCornerY,height);
                break; */
            
            //cases below ignore new lines, tabs, spaces and null terminators in array    
            case '\n': 
            case '\t':
            case ' ':
            case '\0'://without this default missingLetter prints endlessly after encoutering a null terminator
               break;
            
            /*case '$':
                drawCharDollar(ulCornerX,ulCornerY,height);
                break; */
            
            /*case '!':
                drawChar!(0,0,100);
                break; */
            
            case '?':
                drawCharQuestion(ulCornerX,ulCornerY,height);
                break;
        
           /* case '#':
                drawChar#(0,0,100);
                break;*/
                
            default://If switch finds no case matching each character in string it uses default case and prints missingLetter
                drawMissingLetter(ulCornerX,ulCornerY,height);
                break;            
                              
        }//end switch
    }//end for   
	
	    
}//end drawText prototype function
