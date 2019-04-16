#include <stdio.h> // standard line to begin code
int main () 
{ // 

char e;
int n; 
int k;


char phrase[80];
printf("Enter a phrase\n");
scanf("%s", phrase);


printf("Please choose a rotational cipher option:\n");
printf("To encrypt enter: 1 \n");
printf("To decrypt enter: 2\n");

scanf(" %d", &n);

if(n==1){
    printf("Encryption selected:\n");
    
    
}
if(n==2){
    printf("Decryption selected:\n");
}
if(n<1, n>2){
    printf("Error!! Not an available option >:(");
}



   

return 0;
}







// from document e(x)= m + k (%26)- due to 26 letters in alphabet e meaning encryption
// from document d (c) = c-k (%26)