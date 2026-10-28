#include <stdio.h>

struct Student {
    int roll_number;
    char name[50];
    float cut_off;
    char City[50];
    char Dream[50];
};

void Read_Input(struct Student S[], int count) {
    for (int i = 0; i < count; i++) {
        printf("\n--- Enter details for Student %d ---\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &S[i].roll_number);

        printf("Name: ");
        scanf(" %49[^\n]", S[i].name);   // reads full name with spaces

        printf("Cut-off: ");
        scanf("%f", &S[i].cut_off);

        printf("City: ");
        scanf(" %49[^\n]", S[i].City);

        printf("Dream: ");
        scanf(" %49[^\n]", S[i].Dream);
    }
}

void Display_output(struct Student S[], int count) {
    printf("\n\n========== Student Database ==========\n");
    for (int i = 0; i < count; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("  Roll Number : %d\n", S[i].roll_number);
        printf("  Name        : %s\n", S[i].name);
        printf("  Cut-off     : %.2f\n", S[i].cut_off);
        printf("  City        : %s\n", S[i].City);
        printf("  Dream       : %s\n", S[i].Dream);
    }
    printf("======================================\n");
}

int main() {
    int count;

    printf("Enter the Student Count: ");
    if (scanf("%d", &count) != 1 || count <= 0) {
        printf("Please enter a valid positive student count.\n");
        return 1;
    }

    struct Student S[count];   // Variable Length Array

    Read_Input(S, count);
    Display_output(S, count);

    return 0;
}
