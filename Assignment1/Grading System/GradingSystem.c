#include <string.h>

#include "stdio.h"
#include "stdbool.h"

int main(){
    int counter; counter=1;
    float subject1,subject2,subject3,average;
    char grade[4];
    char admission_number[10];
    char surname[10];
    char proceed;
    bool yes = true;
    while (yes==true){
        memset(grade,'\0',sizeof(grade));
        // Get the inputs
        printf("Student No.%d\n",counter);
        printf("Enter student admission number: \n");
        scanf("%s", admission_number);
        printf("Enter student surname: \n");
        scanf("%s", &surname);
        printf("Enter results for subject 1: \n");
        scanf("%f", &subject1);
        printf("Enter results for subject 2: \n");
        scanf("%f", &subject2);
        printf("Enter results for subject 3: \n");
        scanf("%f", &subject3);
        //Calculations
        average = (subject1 + subject2 + subject3) / (float) 3;
        // Grading
        if (average < 40) {
            grade[0] = 'F';
            grade[1] = 'a';
            grade[2] = 'i';
            grade[3] = 'l';
        } else if (average < 50) {
            grade[0] = 'D';
        } else if (average < 60) {
            grade[0] = 'C';
        } else if (average < 70) {
            grade[0] = 'B';
        } else {
            grade[0] = 'A';
        }
        //Output
        printf("The student achieved a grade of: %s\n", grade);
        printf("-------------------------------------------------------------------------\n");
        //Continue?
        printf("Do you want to continue? (Input \"Y\" for Yes and \"N\" for No.)\n");
        scanf("%s", &proceed);
        // continue?
        while (proceed !='Y'&& proceed!='N'){
            printf("Input either \"Y\" or \"N\"!!\n");
            printf("Do you want to continue? (Input \"Y\" for Yes and \"N\" for No.)\n");
            scanf("%s", &proceed);
            }
        if (proceed=='Y'){
            yes=true;
        }
        else if(proceed=='N'){
            yes=false;
        }
        printf("-------------------------------------------------------------------------\n");
        counter++;
        }


    return 0;
    }
