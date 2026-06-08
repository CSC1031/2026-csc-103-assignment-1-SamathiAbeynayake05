#include <stdio.h>

int main()
{
    float m1, m2, m3;
    float total, Average;

    printf("Hello!\n");

    printf("Enter your Mathematics marks: ");
    scanf("%f", &m1);

    printf("Enter your Science marks: ");
    scanf("%f", &m2);

    printf("Enter your English marks: ");
    scanf("%f", &m3);

    total = m1 + m2 + m3;
    Average = total / 3.0;
    printf("\n  STUDENT REPORT    \n");
    printf("Total   : %.2f\n", total);
    printf("Average : %.2f\n", Average);

    if (Average >= 80 && Average <= 100)
        printf("Grade : A\n");
    else if (Average >= 70)
        printf("Grade : B\n");
    else if (Average >= 60)
        printf("Grade : C\n");
    else if (Average >= 50)
        printf("Grade : D\n");
    else
        printf("Grade : F\n");
    if (Average >= 85 && m1 >= 80 && m2 >= 80 && m3 >= 80)
    printf("Distinction : Yes\n");
    else
    printf("Distinction : No\n");

    if ((m1 >= 40) && (m2 >= 40) && (m3 >= 40))
        printf("Result : Pass\n");
    else
        printf("Result : Fail\n");

    return 0;
}
