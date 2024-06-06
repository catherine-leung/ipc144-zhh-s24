#include <stdio.h>

int main(void){
    int number;
    /*while version*/
    //priming the loop
    printf("enter number:");
    scanf("%d",&number);
    while(number != 0){
        printf("enter 0 to stop:");
        scanf("%d",&number);
    }

    do{
        printf("do-while enter number:");
        scanf("%d",&number);
    }while(number != 0);

}
 