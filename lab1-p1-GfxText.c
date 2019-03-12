
/***Dino Dan, CSC250-SP19**********************************************
****Assisted by: j1ff7296, Noah Manter, killengary37, and rawwillard***
****lab1-p1-GfxText lab 2, 3/11/2019 version 1.0**********************/

#include <stdio.h>
#include <string.h>
#include "gfx2.h"
#include "lab1-p2-letterLib.h"
#define SIZE 80


int main(void)
{
    	
    //sets screen size 800 x 800
	int ySize = 800;
	int xSize = 800;
    
    int r, g, b;//represent user's color choices
    double ulCornerX, ulCornerY, height;//represent users's starting point and character size preferences
    
    //Initializing the array named 'UserStringInput' and can hold 99 characters and one null termination character
    char c, userStringInput[SIZE];
    
    //infinite while loop encompassing program ensures that gfx screen
    //stays open and user input is printed to screen until quit 
    //command is issued*****Provided by j1ff******
    while(1) {  
        printf("Enter a word**(type 'clear' to erase screen, 'quit' to endProgram)**:\n");// prompts user input for a string of character stored in array userStringInput
        scanf("%s", userStringInput);
        
    //if user input is 'quit', exit program using string compare derived from string.h(compares what user typed with string 'quit')
	if(strcmp(userStringInput, "quit") == 0)
	break;//exits the while loop
	
	//if user input is 'clear', clear the draw screen and run through loop again
	if(strcmp(userStringInput, "clear") == 0)
	{
	gfx_clear();//gfx2 command for clearing graphics from display window
	gfx_flush();//flushes all outputs to the graphics window, this forces all previous drawing commands to take effect
	continue;
	}
    
        // ask user for the red, green and blue color combo values range 0-255
	    printf("Enter the RED color value (0-255): ");
	    scanf("%d", &r);	
	    printf("Enter the GREEN color value (0-255): ");
	    scanf("%d", &g);	
	    printf("Enter the BLUE color value (0-255): ");
	    scanf("%d", &b);
    
        //establishes character size for graphics using user preferences
        printf("Enter a height:\n");
        scanf("%lf", &height);    
        //establishes a starting point for graphics using user preferences
        printf("Enter x starting coordinate:\n");
        scanf("%lf", &ulCornerX);    
        printf("Enter y starting coordinate:\n");
        scanf("%lf", &ulCornerY);    
    
    
    // Open a new window called Graphics Letter Library for drawing using previously declared integer sizes, x and ySize.
	gfx_open(xSize,ySize,"Graphics Letter Library"); 
	 
	//the function takes all user inputs and applies to variety of cases in switch selection statement function named drawText().
    drawText(userStringInput,r, g, b, ulCornerX, ulCornerY, height);    
    gfx_flush();//flushes all outputs to the graphics window, this forces all previous drawing commands to take effect
    
    }
    
    return 0;    		


} //End main function










