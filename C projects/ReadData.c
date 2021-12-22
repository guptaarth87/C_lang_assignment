#include <stdio.h>
int main(int argc, char const *argv[])
{
    int roll_num, chem, physics, comp;
    float tot_marks;
    float percentage;
    char name[30];
    printf("Input roll number of the student: ");
    scanf("%d", &roll_num);
    printf("Input name of the student: ");
    scanf("%s", &name);
    printf("Input marks of Physics, Chemistry and Computer Application: ");
    scanf("%d %d %d", &chem, &physics, &comp);
    printf("Roll Number: %d\n", roll_num);
    printf("Name: %s\n", name);
    printf("Marks in Chemistry: %d\n", chem);
    printf("Marks in Physics: %d\n", physics);
    printf("Marks in Computer Application: %d\n", comp);
    tot_marks = chem + physics + comp;
    printf("Total Marks: %0.0f\n", tot_marks);
    percentage = (tot_marks / 300) * 100;

    printf("Percentage: %0.2f\n", percentage);
    if (percentage > 75)
    {
        printf("Division: First");
    }
    else if (percentage > 60)
    {
        printf("Division: Second");
    }
    else if (percentage > 40)
    {
        printf("Division: Third");
    }
    else
    {
        printf("Division: Fourth");
    }

    return 0;
}