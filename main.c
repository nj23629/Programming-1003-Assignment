#include <stdio.h> // standard line to begin code
int main () { // 

int e;// intitialising integer e
int n; //initialising integer n 

char phrase[100];// intialising function phrase
printf("Enter a phrase\n");// printf statement prompts user to enter a phrase
scanf("%d", &n);// This line is used to read text a line at a time
printf("Please choose a rotational cipher option:\n");// printf statement prints the line to screen telling user to choose an option
printf("To encrypt enter: E \n");// printf statement prints line to screen telling first option
printf("To decrypt enter: D \n");// printf statements prints line to screen telling second option
scanf("%d", &n);// scanf statement allows user to input one of the above options E or D


    printf("You have chosen to encrpyt the phrase\n");
    printf("Enter rotational encryption amount\n");








return 0;
}


// from document e(x)= m + k (%26)- due to 26 letters in alphabet e meaning encryption
// from document d (c) = c-k (%26)