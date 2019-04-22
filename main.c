#include <stdio.h> // standard line to begin code
int main () 
{ // 

char e;
int n; 
int k;


char phrase[80];
printf("Enter a phrase - using CAPS\n");
scanf(" %s", phrase);


printf("Please choose rotational or substitution cipher option:\n");
printf("To encrypt using rotation cipher enter: 1 \n");
printf("To decrypt using rotation cipher enter: 2\n");
printf("To encrypt using substitution cipher enter: 3\n");
printf("To decrypt using substitution cipher enter: 4\n");

scanf(" %d", &n);

if(n==1){
    printf("Rotational encryption selected of (%s):\n", phrase);
    
}

if(n==2){
    printf("Rotational decryption selected of (%s):\n", phrase);
}


if(n==3){ 
    printf("Subsitution encryption selected of (%s):\n", phrase);
}


if(n==4){
    printf("Substitution decryption selected of (%s):\n", phrase);  
}

if(n<1, n>4){
    printf("Error!! Not an available option >:(");
}



   


return 0;
}






// from document hmm e(x)= m + k (%26)- due to 26 letters in alphabet e meaning encryption
// from document d (c) = c-k (%26)