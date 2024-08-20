#include <stdio.h>
#include <stdlib.h>

struct student {
    int roll;
    char grade;
};

int main() {
    struct student *std = (struct student*) calloc(5, sizeof(struct student));

    if (std == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll: ");
        scanf("%d", &std[i].roll);
        printf("Grade: ");
        scanf(" %c", &std[i].grade);  // Space before %c to consume any leftover newline character
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d \t Roll: %d \t Grade: %c\n", i + 1, std[i].roll, std[i].grade);
    }

    free(std);  // Freeing the dynamically allocated memory
    return 0;
}
