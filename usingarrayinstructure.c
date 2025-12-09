#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main() {
    struct student
    {
        int roll_no;
        char name[80];
        int fees;
        char DOB[80];
    };
    struct student stud[50];
    int n, i, num;

    printf("\n Enter tge number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("\n Enter the roll number: ");
        scanf("%d", &stud[i].roll_no);
        printf("\n Enter the name: ");
        scanf("%s",stud[i].name);
        printf("\n Enter the fees: ");
        scanf("%d",&stud[i].fees);
        printf("\n Enter the DOB: ");
        scanf("%s",stud[i].DOB);
    }
    for(i=0;i<n;i++){
    printf("\n ********DETAILS OF STUDENT %d******", i+1);
    printf("\n ROLL No. = %d", stud[i].roll_no);
    printf("\n NAME = %s", stud[i].name);
    printf("\n FEES = %d", stud[i].name);
    printf("\n DOB = %s", stud[i].DOB);
    }
    getch();
    return 0;
}
