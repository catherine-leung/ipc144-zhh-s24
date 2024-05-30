#include <stdio.h>

int main(void){
    int postfix = 5;
    int prefix = 5;
    int prefixResult;
    int postfixResult;
    int directPostfix = 5;

    postfixResult = postfix++;
    prefixResult = ++prefix;
    printf("postfix = %d\n",postfix);
    printf("prefix = %d\n",prefix);
    printf("postfixResult = %d\n",postfixResult);
    printf("prefixResult = %d\n",prefixResult);
    printf("directPostfix = %d\n",directPostfix++);


    return 0;
}