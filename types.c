#include <stdio.h>

int main(void){
    int x = -2147483647;
    printf("x = %d\n",x);
    printf("x-2 = %d\n",x-2);
    char upper;
    //prompt
    printf("please enter a character: ");
    scanf("%c", &upper);
    printf("upper = %c\n",upper);
    int distance = 'a'-'A';
    char lower = upper + distance;
    printf("lower = %c\n",lower);







    return 0;
}