// Rotational and Substitution cipher

#include <stdio.h>		// standard line to begin code
#include <stdlib.h>		// allows the use of malloc (malloc allocates requested memory and returns a pointer to it)
#include <string.h>		// allows use of strlen (strlen counts the length of the string)

 int
main ()				// main area of code everything initialised here is present inside loops and statements
{



char substitutionkey[26];	// initialises substitutionkey used in substitution cipher with 26 characters
  int n;			// initialises n the number used to select option
  int k;			// k is the number being used for rotational cipher
  int j;			// initialises j which is used in rotationl cipher
  int p;            // initialises p which is used in substitution cipher





char phrase[1024], MSG;	// intialises phrase that can also be noted as MSG(Message) [1024] meaning 1024 characters in length
  printf ("Enter a phrase - using CAPS\n");	// prints to screen "Enter a phrase- using caps" this instructs user
  gets (phrase);		// gets statement used to allow whitespace in text inputted above


printf ("Please choose rotational or substitution cipher option:\n");	// The following lines print the options to screen for user to follow
  printf ("To encrypt using rotation cipher enter: 1 \n");



printf ("To decrypt using rotation cipher enter: 2\n");



printf ("To encrypt using substitution cipher enter: 3\n");



printf ("To decrypt using substitution cipher enter: 4\n");




scanf (" %d", &n);	// allows user to input a number from above for selection

if (n == 1)


    {				// this if statement is initialised if the number 1 is inputted above
      printf ("Rotational encryption selected of (%s):\n", phrase);	// prints to screen telling user rotational encryption has been selected
      printf ("Enter an encryption number:\n");	// prints to screen instructing user to select a number
      scanf (" %d", &k);	// scanf allows user to input rotational number placing the value to k


for (j = 0; phrase[j] != '\0';)	// for loop initialised beginnging at j=0, does not count white space
	{



MSG = phrase[j]; // intialises MSG to phrase[j] taking individual letter into consideration by assinging an integer value [j]




if (MSG >= 'A' && MSG <= 'Z')	// follows statement if letters are between A-Z - ASCII numbers of A=65 and Z=90
	    {



MSG = MSG + k;	// uses the encryption number k to select how many letter spots have moved

	      if (MSG > 'Z') // follows if statement if the letters of MSG are greater than Z this makes



		{



MSG = MSG - 'Z' + 'A' - 1;// to account for the value of MSG being greater than Z : Z is subtracted and A is added plus one.



}



phrase[j] = MSG;	// brings back phrase=MSG which is converted from numerical to letter form
	    }



j++;		// for j plus one each cycle of loop
	}



printf ("The encryption is: %s\n", phrase);	// prints to screen with the encrypted message


}




if (n == 2)


    {				//this if statement is initialised if the number 2 is inputted above
      printf ("Rotational decryption selected of (%s):\n", phrase); // prints selection of option to screen



printf ("Enter an decryption number:\n");// prompts user to enter a decryption number



scanf (" %d", &k);// scanf allows user to input rotational number placing the value to k




for (j = 0; phrase[j] != '\0';)	// [j] takes each individual letter into  consideration in a number format which the ASCII values are when using cipher, not counting white space

	{



MSG = phrase[j];// intialising the message equal to phrase taking each letter into consideration




if (MSG >= 'A' && MSG <= 'Z')// similar to encryption- means letters are between A-Z meaning the calculation is easily just - k



	    {



MSG = MSG - k; // makes the set message equal to the message minus decryption value k


if (MSG < 'A') // if statement is address if MSG is less than A



		{



MSG = MSG + 'Z' - 'A' + 1; // To account for the value being less than A the value of Z is added minusing A then adding one- opposite of encryption


}



phrase[j] = MSG;	// reintialising the value of phrase[j] to MSG back to letter form rather than numerical
	    }


j++;		// for j plus one each cycle of for loop
	}



printf ("The decryption is: %s\n", phrase);	// prints to screen with the decrypted message
    }





if (n == 3)


    {				//this if statement is initialised if the number 3 is inputted above
      printf ("Substitution encryption selected of (%s):\n", phrase);


printf ("Enter a substitution alphabet key:\n"); // prompts user to enter a substitution key by printing this to screen


scanf ("%s", substitutionkey);// scanf statement picks up the key inputted and allocates it to substitutionkey


int f = strlen (substitutionkey);// counts the length of substitutionkey which must be 26 characters


int q = strlen (phrase); // counts the length of the phrase


if (f % 26 != 0) // if the key is less than or greater than 26 the following if statement runs


	{


printf
	    ("Make sure to have a 26 key alphabet not using same letter twice");// tells user that the value inputted doesnt meet guidelines


return 0;// ends program


}




char *encryptionphrase = (char *) malloc (sizeof (char) * q);// allocates requested memory returing a pointer to it




for (int p = 0; p < q; p++)// for loop of increments of p as p<q starting at p=0


	{



int b = (phrase[p]) - 'A';// initialises as ASCII number taking from letter form to numerical form



if (b >= 0 && b < 26)// if statement addressed as b is greater than 0 and less than 26


	    {




encryptionphrase[p] = substitutionkey[b];// initialising numerical form of both encryption and key



}



	  else


	    {



encryptionphrase[p] = phrase[p];// intialises encrypted phrase to phase



}



}





printf ("The encryption is: %s\n", encryptionphrase);// prints the encrpyted phrase to screen




}




if (n == 4)// if the value n=4 is selected this statement is addressed


    {






int c (char substitutionkeykey[26], char dt) // makes substitutionkey and dt into integer
      {





for (int p = 0; p < 26; p++)// for loop for increments of p, starting at p=0 and ends at p is less than 26


	  {




if (substitutionkey[p] == dt)// if the substitution and encryption is same will return value p;


	      {

return p;



}



}



return 0;// ends program



}




printf ("Substitution decryption selected of (%s):\n", phrase);// prints to screen selected option




printf ("Enter a substitution alphabet key:\n");// prompts user to enter an alphabet key



scanf ("%s", substitutionkey);// collects the key and stores it in substitutionkey

 int f = strlen (substitutionkey);// counts the length of substitutionkey which must be 26 characters


 if (f % 26 != 0)// ensures the key is exactly 26 letters long


    {





printf
	("Make sure to have a 26 key alphabet not using same letter twice");// if not 26 letters tells user the error



 return 0;

    }

int q = strlen (phrase);// intialising an integer to the phrase








char *decryptedphrase =  (char *) malloc (sizeof (char) * q);// allocates requested memory to pointer



for (int p = 0; p < q; p++)// for loop as long as p<q starting at p=0 and incrementing by 1


	{




int b = (phrase[p]) - 'A';// sets numerical values to the phrase to use ASCII values




if (b >= 0 && b < 26)// follows statement if value of b is greater than 0 and less than 26


	    {




int b = c (substitutionkey, phrase[p]);// makes into integer values b of the function c




decryptedphrase[p] = 'A' + b;// integer values of the decrypted phrase



}



	  else


	    {



decryptedphrase[p] = phrase[p];//making the decryptedphrase = phrase begun with making the decyrption happen



}




}




printf ("The decrypted text is: %s\n", decryptedphrase);// prints to screen the decrypted text




return 0;// ends program



}



if (n < 1, n > 4)


    {				//this if statement is initialised if the numbers above are not selected
      printf ("Error!! Not an available option >:(");	// prints statement to screen demonstrating to user that error










return 0;// ends program
    }

}