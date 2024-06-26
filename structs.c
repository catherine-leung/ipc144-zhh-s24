#include <stdio.h>

struct Product{
    int productNumber;  //member of the Product struct
    double unitPrice;
    int quantity;
};
int main(void){

    //<type name> <variable> = <initialization>
    //struct Product is the data type (like int)
    //myproduct is the variable name
    //{12345, 10.23, 5} are used to initialize the members of the struct
    struct Product  myproduct = {12345, 10.23, 5};

    //the . operator is like the english 's
    //myproduct's productNumber
    printf("Product Number: %d\n", myproduct.productNumber);
    printf("Price: %.2lf\n", myproduct.unitPrice);
    printf("Quantity: %d\n",myproduct.quantity);

    struct Product   copy = myproduct;


    printf("Product Number: %d\n", copy.productNumber);
    printf("Price: %.2lf\n", copy.unitPrice);
    printf("Quantity: %d\n",copy.quantity);


}