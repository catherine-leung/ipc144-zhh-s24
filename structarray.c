#include <stdio.h>

struct Student{
    int studentNumber;
    int quiz1;
    int quiz2;
    float gpa;
};

int main(void){

    struct Student myclass[40]={
        {12345, 10, 9, 4.0},
        {33333, 7, 6, 3.2},
        {11111,8, 7, 3.5},
        {22222, 3,4, 2.0},
        {54321, 9,6, 3.7}

    };
    int numStudents = 5;

    //print
    printf("unsorted:\n");
    for(int i=0;i<numStudents;i++){
        //print student number and their scores
        printf("Student: %d\n", myclass[i].studentNumber);
        printf("\tQ1: %d\n",myclass[i].quiz1);
        printf("\tQ2: %d\n",myclass[i].quiz2);
        printf("\tGPA: %.1f\n",myclass[i].gpa);
    }
    //sort
    for(int i=0; i<numStudents-1;i++){
        for(int j=0;j<numStudents-1-i;j++){
            if(myclass[j].studentNumber > myclass[j].studentNumber){
                struct Student tmp = myclass[j];
                myclass[j] = myclass[j+1];
                myclass[j+1] = tmp;
            }

        }
    }



    //print
    printf("sorted:\n");
    for(int i=0;i<numStudents;i++){
        //print student number and their scores
        printf("Student: %d\n", myclass[i].studentNumber);
        printf("\tQ1: %d\n",myclass[i].quiz1);
        printf("\tQ2: %d\n",myclass[i].quiz2);
        printf("\tGPA: %.1f\n",myclass[i].gpa);
    }
    return 0;
}