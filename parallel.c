#include <stdio.h>

int main(void){
    int studentNumber[40] = {12345, 22222, 33333};
    int quiz1[40]={10, 7, 8};
    int quiz2[40]={9, 6, 7};
    int quiz3[40]={8, 7, 6};
    int theStudent;
    int numStudents = 3;

    printf("Enter a student number: ");
    scanf("%d", &theStudent);

    //this is the index of where student number was found     //if not found, this will be -1.  
    //We use -1 to indicate not found because 0 and other positive 
    int foundIdx = -1;
    for (int i=0;i<numStudents && foundIdx == -1;i++){
        if(studentNumber[i] == theStudent){
            foundIdx = i;
        }
    }
    if(foundIdx == -1){
        printf("did not find student with student number %d\n", theStudent);
    }
    else{
        //print student number and their scores
        printf("Student: %d\n", studentNumber[foundIdx]);
        printf("\tQ1: %d\n",quiz1[foundIdx]);
        printf("\tQ2: %d\n",quiz1[foundIdx]);
        printf("\tQ3: %d\n",quiz1[foundIdx]);
    }
    return 0;
}