#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, m6, total, percentage;
    char grade;

    printf("Enter 6 subject marks: ");
    scanf("%f %f %f %f %f %f", &m1, &m2, &m3, &m4, &m5, &m6);

    total = m1 + m2 + m3 + m4 + m5 + m6;
    percentage = total / 6;

    if (percentage >= 95)
        grade = 'A';
    else if (percentage >= 85)
        grade = 'B';
    else if (percentage >= 75)
        grade = 'C';
    else if (percentage >= 65)
        grade = 'D';
    else if (percentage >= 45)
        grade = 'E';
    else
        grade = 'F';

    printf("Percentage: %.2f\n", percentage);
    printf("Grade: %c", grade);

    return 0;
}
