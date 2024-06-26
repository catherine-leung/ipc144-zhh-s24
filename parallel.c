#include <stdio.h>

int main(void){
    int studentNumber[40] = {12345, 33333, 11111, 22222, 54321};
    int quiz1[40]={10, 7, 8, 3, 9};
    int quiz2[40]={9, 6, 7, 4, 6};
    float gpa[40]={4.0, 3.2, 3.5 , 2.0, 3.7};
    int theStudent;
    int numStudents = 5;

    printf("Enter a student number: ");
    scanf("%d", &theStudent);

    //this is the index of where student number was found     
    //if not found, this will be -1.  
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
        printf("\tQ2: %d\n",quiz2[foundIdx]);
        printf("\tGPA: %.1f\n",gpa[foundIdx]);
    }
    return 0;
}