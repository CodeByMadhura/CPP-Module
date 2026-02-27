#include<stdio.h>

int main(){

    float maths, science, english, history, marathi;
    float total_marks, total_percentage;
    char grade;

    printf("Enter the marks of Maths, Science, English, History, Marathi: ");
    scanf("%f %f %f %f %f", &maths, &science, &english, &history, &marathi);

    // Calculate total and percentage
    total_marks = maths + science + english + history + marathi;
    total_percentage = total_marks / 5;

    // Ternary for grade
    grade = (total_percentage >= 75) ? 'A' :
            (total_percentage >= 60) ? 'B' :
            (total_percentage >= 45) ? 'C' :
            'F';

    // Printing all details
    printf("\n----- MARKS DETAILS -----\n");
    printf("Maths   : %.2f\n", maths);
    printf("Science : %.2f\n", science);
    printf("English : %.2f\n", english);
    printf("History : %.2f\n", history);
    printf("Marathi : %.2f\n", marathi);

    printf("\nTotal Marks      : %.2f\n", total_marks);
    printf("Total Percentage : %.2f%%\n", total_percentage);
    printf("Grade            : %c\n", grade);

    return 0;
}
