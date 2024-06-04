#include <stdio.h>

int main(void){
    int input;
    printf("please enter 0: ");
    scanf("%d",&input);
    while(input != 0){
        printf("please enter 0: ");
        scanf("%d",&input);
    }
    printf("thank you\n");
}