#include <stdio.h>
struct Student {
    int id;
    char name[50];
    float marks[5];
};
int main() {
    int n, i, j;    
    printf("No. of students: ");
    scanf("%d", &n);
    struct Student students[n];

    for (i = 0; i < n; i++) {
        printf("\nid for student %d: ", i + 1);
        scanf("%d", &students[i].id);

        printf("name for student %d: ", i + 1);
        scanf("%s", students[i].name); 

        printf("marks for 5 subjects:\n");
        for (j = 0; j < 5; j++) {
            scanf("%f", &students[i].marks[j]);
        }
    }

    printf("\nTotal Marks :\n");
    for (i = 0; i < n; i++) {
        float total = 0;
        for (j = 0; j < 5; j++) {
            total += students[i].marks[j];
        }

        printf("Student ID: %d\n", students[i].id);
        printf("Student Name: %s\n", students[i].name);
        printf("Total Marks: %.2f\n", total);
    }

    return 0;

}
