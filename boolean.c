#include <stdio.h>

int main(void){
    printf("6<8 = %d\n",6<8);
    printf("7==8 || 6<5 = %d\n",7==8 || 6<5);
    int x = 7;
    /* note this is x = 5 which means assign 5 to x.  result of assignment is
       5.  and 5 is not 0.  Thus it is true*/
    if(x=5){
        printf("x is true\n");
    }
    int y = 0;
    /*below, y = 0, note = not ==.  Thus y is assigned 0.  and 0 is false
    result of assignment is value assigned so y = 0 results in 0 which is falsey*/
    if(y = 0){
        printf("y is true\n");
    }



    x = 7;
    /* note this is x = 5 which means assign 5 to x.  result of assignment is
       5.  and 5 is not 0.  Thus it is true*/
    if(x==5){
        printf("x is true\n");
    }
    y = 0;
    /*below, y = 0, note = not ==.  Thus y is assigned 0.  and 0 is false
    result of assignment is value assigned so y = 0 results in 0 which is falsey*/
    if(y == 0){
        printf("y is true\n");
    }

    return 0;
}