#include <stdio.h> // standard line to begin code
int main () 
{ // 

int n; 
int k;// k is the number being used for rotational cipher


char phrase[80];
printf("Enter a phrase - using CAPS\n");
gets(phrase);


printf("Please choose rotational or substitution cipher option:\n");
printf("To encrypt using rotation cipher enter: 1 \n");
printf("To decrypt using rotation cipher enter: 2\n");
printf("To encrypt using substitution cipher enter: 3\n");
printf("To decrypt using substitution cipher enter: 4\n");

scanf(" %d", &n);

if(n==1){
    printf("Rotational encryption selected of (%s):\n", phrase);
    printf("Enter an encryption number:\n");
    scanf(" %d", &k);
    char encryption[80], phrase;
    int i;
    for (i=0; encryption[i] != '\0'; ++i)
    {
        phrase= encryption[i];
    if (phrase >= 'A' && phrase <= 'Z') 
    {
        phrase= encryption + k;
    if (phrase > 'Z') 
    {
        phrase= encryption - 'Z' + 'A'-1;
    }
      encryption[i]= phrase;
    }
    }
    printf("The encryption is: %s\n", encryption);
    
    
}

if(n==2){
    printf("Rotational decryption selected of (%s):\n", phrase);
    printf("Enter an decryption number:\n");
    scanf(" %d", &k);
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