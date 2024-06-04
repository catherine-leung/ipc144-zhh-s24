/*Start with the printstar program.  Change the program so that only 20 stars 
will be printed per line.  Thus if user enters 36, we will print 1 line with 20 
starts then a line of 16 stars
*/

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
