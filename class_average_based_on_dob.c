#include <stdio.h>
int main() {
    int marks[25], revised_marks[25];
    int birth_month[25];
    int sum_marks = 0, sum_revised_marks = 0;
    float class_avg, revised_class_avg;
    int i;
    printf("Enter the marks for each student:\n");
    for (i = 0; i < 25; i++) {
        printf("Student %d: ", i+1);
        scanf("%d", &marks[i]);
    }
    printf("\nEnter the birth month for each student:\n");
    for (i = 0; i < 25; i++) {
        printf("Student %d: ", i+1);
        scanf("%d", &birth_month[i]);
    }    
    for (i = 0; i < 25; i++) {
        revised_marks[i] = marks[i] + birth_month[i];
        sum_marks += marks[i];
        sum_revised_marks += revised_marks[i];
    }  
    class_avg = (float) sum_marks / 25;
    revised_class_avg = (float) sum_revised_marks / 25;  
    if (revised_class_avg - class_avg >= 5) {
        printf("\nCan implement - Significant increase in class average\n");
    } else {
        printf("\nNeed not implement - No significant increase in class average\n");
    } 
    printf("\nClass average for original marks: %.2f\n", class_avg);
    printf("Class average for revised marks: %.2f\n", revised_class_avg);

    return 0;
}
