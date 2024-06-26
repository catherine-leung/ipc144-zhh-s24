#include <stdio.h>
#define INTARRAYCAPACITY 40

int main(void){

    float floatArray[50] = {0}; //50 element long array of floats
    int intArray[INTARRAYCAPACITY] = {245, 32};       //4 element long array of ints
    int usedIntArray = 2;

    for(int i=0 ;i < usedIntArray;i++){
        printf("%d\n",intArray[i]);
    }   



}