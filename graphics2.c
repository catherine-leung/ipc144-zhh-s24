/*Read in 2 positive whole numbers.
The first is the width of a rectangle (1 and 80)
The second is the height of a rectangle (1 and 30)


Draw a square of stars that is the dimensions entered
example if width = 4 and height = 2 program draws:

****
****



*/

#include <stdio.h>

int main(void){
    int totalStars;
    printf("please enter how many stars.  number must be positive: ");
    scanf("%d",&totalStars);
    while(totalStars <= 0){
        printf("that was not positive");
        printf("please enter a positive number: ");
        scanf("%d",&totalStars);
    }
    
    for(int i=0; i < totalStars ;i++){
        printf("*");
        if(i % 20 == 19){
            printf("\n");
        }
    }
    if(totalStars%20 != 0){
        printf("\n");
    }
}
