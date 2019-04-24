#include <stdio.h>		// standard line to begin code
int
main ()				// main area of code everything initialised here is present inside loops and statements
{
  
 
int n;			// initialises n the number used to select option
int k;			// k is the number being used for rotational cipher
int j;          // initialises j which is used in rotationl cipher
  
 
char phrase[80], MSG;	// intialises phrase that can also be noted as MSG(Message)
  printf ("Enter a phrase - using CAPS\n");	// prints to screen "Enter a phrase- using caps" this instructs user
  gets (phrase);		// statement used to allow whitespace in text inputted above
  
 
printf ("Please choose rotational or substitution cipher option:\n");	// The following lines print the options to screen for user to follow
  printf ("To encrypt using rotation cipher enter: 1 \n");
  
printf ("To decrypt using rotation cipher enter: 2\n");
  
printf ("To encrypt using substitution cipher enter: 3\n");
  
printf ("To decrypt using substitution cipher enter: 4\n");
  
 
scanf (" %d", &n);		// allows user to input a number from above for selection
  
if (n == 1)
    {				// this if statement is initialised if the number 1 is inputted above
      printf ("Rotational encryption selected of (%s):\n", phrase);	// prints to screen telling user rotational encryption has been selected
      printf ("Enter an encryption number:\n");	// prints to screen instructing user to select a number
      scanf (" %d", &k);	// scanf allows user to input rotational number
      
			
      for (j = 0; phrase[j] != '\0'; ++j)	// for loop initialised-  
	{
	  
MSG = phrase[j];
	  
 
if (MSG >= 'A' && MSG <= 'Z')	// demonstrates if the letters are bew
	    {
	      
MSG = MSG + k;	// uses the encryption number k to select how many letter spots have moved
	      if (MSG > 'Z')
		
		{
		  
MSG = MSG - 'Z' + 'A' - 1;
		
}
	      
phrase[j] = MSG;	// brings back phrase=MSG which is then used to print to screen
	    }
	
}
      
printf ("The encryption is: %s\n", phrase);	// prints to screen with the encrypted message
    
 
}
  
 
if (n == 2)
    {				//this if statement is initialised if the number 2 is inputted above
      printf ("Rotational decryption selected of (%s):\n", phrase);
      
printf ("Enter an decryption number:\n");
      
scanf (" %d", &k);
      
      
for (j = 0; phrase[j] != '\0'; ++j) // [i] takes each individual letter into  consideration when using cipher
	
	{
	  
MSG = phrase[j];
	  
 
if (MSG >= 'A' && MSG <= 'Z')
	    
	    {
	      
MSG = MSG - k;	
	      if (MSG < 'A')
		
		{
		  
MSG = MSG + 'Z' - 'A' + 1;	
		}
	      
phrase[j] = MSG;	// 
	    }
	
}
      
printf ("The decryption is: %s\n", phrase);	// prints to screen with the decrypted message
    }
  
 
 
if (n == 3)
    {				//this if statement is initialised if the number 3 is inputted above
      printf ("Subsitution encryption selected of (%s):\n", phrase);
    
}
  
 
 
if (n == 4)
    {				//this if statement is initialised if the number 4 is inputted abov
      printf ("Substitution decryption selected of (%s):\n", phrase);
    
}
  
 
if (n < 1, n > 4)
    {				//this if statement is initialised if the numbers above are not selected
      printf ("Error!! Not an available option >:(");	// prints statement to screen demonstrating to user that error
    }
  
 
 
 
 
 
 
return 0;

}