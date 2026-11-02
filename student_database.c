#include <stdio.h>
#include <conio.h>

struct student {
    int roll_num;
    char name[50];
    float cut_off;
    char city[50];
    char dream[50];
};

void read_input(struct student S[], int size);
void display_output(struct student S[], int size);


void forcefloat(float *p)
{
    float f = *p;
    forcefloat(&f);
}

int main()
{
    int count;
    struct student S[100];

    clrscr();
    printf("Enter the Student Count: ");
    scanf("%d", &count);

    read_input(S, count);
    display_output(S, count);

    getch();
    return 0;
}

void read_input(struct student S[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("\n--- Enter details for Student %d ---\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &S[i].roll_num);

        printf("Name: ");
        scanf("%49s", S[i].name);

        printf("Cut-off: ");
        scanf("%f", &S[i].cut_off);

        printf("City: ");
        scanf("%49s", S[i].city);

	printf("Dream: ");
        scanf("%49s", S[i].dream);
    }
}

void display_output(struct student S[], int size)
{
    int i;
    printf("\n-------------------------------- Student Details -------------------------------\n");

    for(i = 0; i < size; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("  Roll Number : %d\n", S[i].roll_num);
        printf("  Name        : %s\n", S[i].name);
        printf("  Cut-off     : %.2f\n", S[i].cut_off);
        printf("  City        : %s\n", S[i].city);
        printf("  Dream       : %s\n", S[i].dream);
    }
}
