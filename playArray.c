#include <stdio.h>

int main(void)
{
    //declares size of array that can store 99 characters and one string termination char '\0' which = 100    
    char input[100];
    
    // variable index is used in for loop to contain the position of characters in array
    int index;
    
    printf("%s", "Enter a single word in all caps:\n");   // prompts user input
    scanf("%s", input);    // stores user input, could also writes as "gets(input);" excluding double quotes
    
    /* for loop to print out each individual character in string (beginning with index 0) inputed by user and stored
    in the char array named 'input'. Also, we want to stop (exit for loop) at input's index with the termination character '\0', so if 
    character in index doesn't != \0 we keep printing each index in array 'input'.*/
    for( index = 0; input[index] != '\0'; index++ ) {
        printf("\n%c", input[index]);
        
        //This last printf statement creates a new line after each character in string is printed.
        printf("\n");
    }
    
    
    
    return 0;



}
