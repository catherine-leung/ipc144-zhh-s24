#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
//in C we have null terminated character strings
    char alphabet[27];

    for(int i = 0;i<26;i++){
        alphabet[i] = 'a' + i;
    }
    
    alphabet[26] = '\0';
    printf("%s\n",alphabet);
    int difference = 'a'-'A';
    for(int i = 0;i<26;i++){
        alphabet[i] = alphabet[i] - difference;
    }
    printf("%s\n",alphabet);
    return 0;

}