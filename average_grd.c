#include <stdio.h>

struct Student {
    char name[50];
    float grade;
};

int main() {
    int n; 
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n]; 

    
    for (int i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter the grade of student %d: ", i + 1);
        scanf("%f", &students[i].grade);
    }

    float total = 0;
    for (int i = 0; i < n; i++) {
        total += students[i].grade;
    }

    float average = total / n;
    printf("The average grade is: %.2f\n", average);

    return 0;
}
