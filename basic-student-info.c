#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char name [50];
    int age;
    char program[80];
    char university[50];

    printf("\n------------------------------------------------------------------------------------------\n");
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf(" %d", &age);
    getchar();

    printf("Enter your program: ");
    fgets(program, sizeof(program), stdin);

    printf("Enter your university: ");
    fgets(university, sizeof(university), stdin);

    printf("\n------------------------------------------------------------------------------------------\n");
    printf("Student Information:\n");
    printf("Name: %s", name);
    printf("Age: %d", age);
    printf("\nProgram: %s", program);
    printf("University: %s", university);

    return 0;
}
