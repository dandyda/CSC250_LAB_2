#include <stdio.h>
#include "gfx2.h"
#include "lab1-p2-letterLib.h"
#define SIZE 80

//prototype function called print is POINTING to array called input and renaming it 'string'
void print(char* userString)
{
    //variable 'i' is being used as a watchdog for the null termination character '\0'.
    int i = 0;
    char c;
    while (userString[i] != '\0')
    {   
        //printf("%c\n", userString[i]);//this will print each element and put a new line after each element at terminal but not as drawChar graphic
        //i++;//this will increment through each element of array 'input' and copy data to 'string'
    
    for( i=0; i < SIZE; i++ ) {
    
    switch (userString[i]) {
            
        
            
        case 'Q':
        case 'q':
            drawCharQ(150,150,150);
            break;
            
                    
        }//end switch
    }
    
    // Wait for the user to press a character.
		c = gfx_wait();

		// Quit if it is the letter q.
		if(c=='q') break;
	}//End while

	 
	
	    
}//end print(char* string)


int main()
{
    
     //sets screen size 500 x 500
	int ysize = 600;
	int xsize = 600;
    char c;

	// Open a new window for drawing.
	gfx_open(xsize,ysize,"Example Graphics Program");

	// Set the current drawing color to red
	gfx_color(200,0,0);
	drawCharQ(20,20,300);
	
    char input[100];//the array name is 'input' and can hold 99 characters and one null termination character
    //char color;
    //double height;
    
    printf("%s", "Enter a single word in all caps:\n");// prompts user input
    scanf("%s", input);
    //printf("%s", "Enter a color for your string:\n");
    //scanf("%s", color);
    //printf("%lf", "Enter a height:\n");
    //scanf("%lf", height);
    /*Introducing a prototype function called print, it's job is to print the user's input stored in array 'input'
      **the function prototype print is using a character pointer called 'string' to copy data stored in 'input' array.
      **this allows us to manipulate data in other functions without changing user input.*/
    print(input);
    
   		
	/*while(1) {
		// Wait for the user to press a character.
		c = gfx_wait();

		// Quit if it is the letter q.
		if(c=='q') break;
	}//End while

	return 0;*/


} //End main function
