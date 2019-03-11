/*Dino Dan, CSC250-SP19
  Contributed by Noah and Gary
  3/11/19*/


#include <stdio.h>
#include <unistd.h>
#include "gfx2.h"
#include "lab1-p2-letterLib.h"
#define SIZE 100

int main()
{
    
     //sets screen size 800 x 800
	int ySize = 800;
	int xSize = 800;
    
    long int r, g, b;
    double ulCornerX, ulCornerY, height;

	char c, userStringInput[SIZE];//Initializing the array named 'UserStringInput' and can hold 99 characters and one null termination character
           
    printf("Enter a word:\n");// prompts user input
    scanf("%s", userStringInput);
    
    // ask user for the red color value 0-255
	printf("Enter the RED color value (0-255): ");
	scanf("%ld", &r);
	
	// ask user for the green color value 0-255
	printf("Enter the GREEN color value (0-255): ");
	scanf("%ld", &g);
	
	// ask user for the blue color value 0-255
	printf("Enter the BLUE color value (0-255): ");
	scanf("%ld", &b);
    
    printf("Enter a height:\n");
    scanf("%lf", &height);
    
    printf("Enter x starting coordinate:\n");
    scanf("%lf", &ulCornerX);
    
    printf("Enter y starting coordinate:\n");
    scanf("%lf", &ulCornerY);
    
    // Open a new window for drawing.
	gfx_open(xSize,ySize,"Graphics Letter Library");
	gfx_color(r,g,b);// Set the current drawing color to user preference
    
    // loop for case switch
    for(int i=0; i<SIZE; i++){
    	c = userStringInput[i];
    	ulCornerX += .8*height;//establishes a scalable spacing using character height for drawChar functions
    	
    //use a grey box to test each character drawn
    	gfx_color(100,100,100);
    
    //tests userStringInput for each character against each case until the while statement encounters null terminator	
        gfx_color(r,g,b);     
        switch (c) {
                     
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
            case '\0'://without this default prints endlessly after encoutering a null terminator
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
                
            default:
                drawMissingLetter(ulCornerX,ulCornerY,height);
                break;  
        
            /*case "clear":
            case "Clear":
                something();
                break;
        
            case "exit":
            case "Exit":
                something();
                break;*/
            
                              
        }//end switch
    }//end for
    
    while(1) {
		// Wait for the user to press a character.
		c = gfx_wait();

		// Quit if it is the letter q.
		if(c=='q') break;
	}//end while 
	
	return 0;    		
	
} //End main function
