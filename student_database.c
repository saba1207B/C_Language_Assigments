#include <stdio.h>
#include <string.h>

struct Student {
    int roll_number;
    char name[50];
    float cut_off;
    char city[50];
    char dream[50];
};

int main(void)
{
    int count, i, search_roll, found = 0;

    printf("Enter the Student Count: ");
    if (scanf("%d", &count) != 1 || count <= 0) {
        printf("Please enter a valid positive student count.\n");
        return 1;
    }

    struct Student s[count];

    for (i = 0; i < count; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        if (scanf("%d", &s[i].roll_number) != 1) {
            printf("Invalid roll number.\n");
            return 1;
        }

        printf("Name: ");
        scanf(" %49[^\n]", s[i].name);

        printf("Cut-off: ");
        if (scanf("%f", &s[i].cut_off) != 1) {
            printf("Invalid cut-off value.\n");
            return 1;
        }

        printf("City: ");
        scanf(" %49[^\n]", s[i].city);

        printf("Dream: ");
        scanf(" %49[^\n]", s[i].dream);
    }

    printf("\n--- Student Database ---\n");

    for (i = 0; i < count; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: %d\n", s[i].roll_number);
        printf("Name: %s\n", s[i].name);
        printf("Cut-off: %.2f\n", s[i].cut_off);
        printf("City: %s\n", s[i].city);
        printf("Dream: %s\n", s[i].dream);
    }

    printf("\nEnter Roll Number to Search: ");
    if (scanf("%d", &search_roll) != 1) {
        printf("Invalid roll number.\n");
        return 1;
    }

    for (i = 0; i < count; i++) {
        if (s[i].roll_number == search_roll) {
            printf("\nStudent Found!\n");
            printf("Roll Number: %d\n", s[i].roll_number);
            printf("Name: %s\n", s[i].name);
            printf("Cut-off: %.2f\n", s[i].cut_off);
            printf("City: %s\n", s[i].city);
            printf("Dream: %s\n", s[i].dream);

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found!\n");
    }

    return 0;
}
