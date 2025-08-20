#include <stdio.h>

int main()
    {
    char name[50];
    int id;
    char section;
    float cgpa;

    printf("Enter my name: ");
    scanf("%s", name);

    printf("Enter my ID: ");
    scanf("%d", &id);

    printf("Enter my section: ");
    scanf(" %c", &section);

    printf("Enter my expected CGPA: ");
    scanf("%f", &cgpa);

    printf("\nMY DETAILS\n");
    printf("Name: %s\n", name);
    printf("ID: %d\n", id);
    printf("Section: %c\n", section);
    printf("Expected CGPA: %.2f\n", cgpa);

    return 0;
}
