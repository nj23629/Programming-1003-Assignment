#include <stdio.h> // standard line to begin code
int main () 
{ // 

char e;
int n; 
char E;
char D;

char phrase[2];
printf("Enter a phrase\n");
scanf("%s", phrase);


printf("Please choose a rotational cipher option:\n");
printf("To encrypt enter: E \n");
printf("To decrypt enter: D\n");

scanf(" %c", &e);

for(e==E)
{ printf("encryption selected\n");

}

for(e==D)
{ printf("decryption selected\n");

}

   

return 0;
}








// from document e(x)= m + k (%26)- due to 26 letters in alphabet e meaning encryption
// from document d (c) = c-k (%26)