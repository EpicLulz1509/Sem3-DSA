//12) WAP to store the information of a student and display it.

#include<stdio.h>

struct Student{
    char name[10];
    int age;
    float gpa;
};

int main(){

    int n = 10;
    struct Student s[n];

    for(int i = 0; i < n; i++){
        printf("Enter name of student %d: ", i+1);
        scanf(" %s", &s[i].name);
        printf("Enter age of student %d: ", i+1);
        scanf("%d", &s[i].age);
        printf("Enter gpa of student %d: ", i+1);
        scanf("%f", &s[i].gpa);
    }

    for(int i = 0; i < n; i++){
        printf("Name of student %d is : %s \n", (i+1), s[i].name);
        printf("Age of student %d is : %d \n", (i+1), s[i].age);
        printf("gpa of student %d is : %f \n", (i+1), s[i].gpa);
    }


    return 0;
}