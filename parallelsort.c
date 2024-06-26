#include <stdio.h>

int main(void){
    int studentNumber[40] = {12345, 33333, 11111, 22222, 54321};
    int quiz1[40]={10, 7, 8, 3, 9};
    int quiz2[40]={9, 6, 7, 4, 6};
    float gpa[40]={4.0, 3.2, 3.5 , 2.0, 3.7};
    int theStudent;
    int numStudents = 5;

    //print
    printf("unsorted:\n");
    for(int i=0;i<numStudents;i++){
        //print student number and their scores
        printf("Student: %d\n", studentNumber[i]);
        printf("\tQ1: %d\n",quiz1[i]);
        printf("\tQ2: %d\n",quiz2[i]);
        printf("\tGPA: %.1f\n",gpa[i]);
    }
    //sort
    for(int i=0; i<numStudents-1;i++){
        for(int j=0;j<numStudents-1-i;j++){
            if(studentNumber[j] > studentNumber[j+1]){
                int tmp = studentNumber[j];
                studentNumber[j] = studentNumber[j+1];
                studentNumber[j+1] = tmp;
                tmp = quiz1[j];
                quiz1[j] = quiz1[j+1];
                quiz1[j+1] = tmp;
                tmp = quiz2[j];
                quiz2[j] = quiz2[j+1];
                quiz2[j+1] = tmp;
                float ftmp = gpa[j];
                gpa[j] = gpa[j+1];
                gpa[j+1] = tmp;
            }

        }
    }



    //print
    printf("sorted:\n");
    for(int i=0;i<numStudents;i++){
        //print student number and their scores
        printf("Student: %d\n", studentNumber[i]);
        printf("\tQ1: %d\n",quiz1[i]);
        printf("\tQ2: %d\n",quiz2[i]);
        printf("\tGPA: %.1f\n",gpa[i]);
    }
    return 0;
}