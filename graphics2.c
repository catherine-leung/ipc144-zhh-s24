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
    int width;
    int height;
    printf("please enter width.  (1 to 80): ");
    scanf("%d",&width);
    while(width <= 0 || width>80){
        printf("that was not positive");
        printf("please enter a positive number: ");
        scanf("%d",&width);
    }

    printf("please enter height.  (1 to 30): ");
    scanf("%d",&height);
    while(height <= 0 || height>30){
        printf("that was not valid");
        printf("please enter a valid number (1 to 30): ");
        scanf("%d",&height);
    }

    for (int j=0;j<height;j++){
        for(int i=0; i < width ;i++){
            printf("*");
        }
        printf("\n");
    }




}
