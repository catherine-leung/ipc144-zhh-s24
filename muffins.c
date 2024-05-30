#include <stdio.h>

int main(void){
    double priceOfMuffin;
    int numberOfMuffins;
    double subTotal;
    double hst = 0.0;
    printf("What is the price of a muffin: ");
    scanf("%lf",&priceOfMuffin);
    printf("How many are you buying? ");
    scanf("%d",&numberOfMuffins);
    subTotal = priceOfMuffin * numberOfMuffins;
    printf("Subtotal = %.2lf\n",subTotal);

    if(numberOfMuffins < 6){
        hst = 0.13 * subTotal;
    }
    printf("Taxes = %.2lf\n",hst);
    printf("Total = %.2lf\n",hst + subTotal);
}