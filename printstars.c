#include <stdio.h>

int main(void){
    int numstars;
    printf("please enter how many stars.  number must be positive: ");
    scanf("%d",&numstars);
    while(numstars <= 0){
        printf("that was not positive");
        printf("please enter a positive number: ");
        scanf("%d",&numstars);
    }
    
    for(int i=0; i < numstars ;i++){
        printf("*");
    }
    printf("\n");
}
