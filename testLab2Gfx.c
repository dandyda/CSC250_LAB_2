#include <stdio.h>
#include "gfx2.h"
#include "lab1-p2-letterLib.h"


//prototype function called print is POINTING to array called input and renaming it 'string'
void print(char* string)
{
    //variable 'i' is being used as a watchdog for the null termination character '\0'.
    int i = 0;
    while (string[i] != '\0')
    {   
        printf("%c\n", string[i]);//this will print each element and put a new line after each element at terminal but not as drawChar graphic
        i++;//this will increment through each element of array 'input' and copy data to 'string'
    }// end while

}//end print(char* string)

int main()
{
    
     //sets screen size 500 x 500
	int ysize = 500;
	int xsize = 500;
    char c;

	// Open a new window for drawing.
	gfx_open(xsize,ysize,"Example Graphics Program");

	// Set the current drawing color to red
	gfx_color(200,0,0);
	drawCharQ(20,20,300);
	
    char input[100];//the array name is 'input' and can hold 99 characters and one null termination character
    
    
    printf("%s", "Enter a single word in all caps:\n");// prompts user input
    scanf("%s", input);
    /*Introducing a prototype function called print, it's job is to print the user's input stored in array 'input'
      **the function prototype print is using a character pointer called 'string' to copy data stored in 'input' array.
      **this allows us to manipulate data in other functions without changing user input.*/
    print(input);
    
   

	
	
		
	while(1) {
		// Wait for the user to press a character.
		c = gfx_wait();

		// Quit if it is the letter q.
		if(c=='q') break;
	}//End while

	return 0;


} //End main function
