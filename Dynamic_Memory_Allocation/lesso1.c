#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_students;    
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    printf("You entered %d students.\n", num_students);
    int *student_passes;
    student_passes = (int *)malloc(num_students * sizeof(int));

    if (student_passes == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    // Loop through each student to give them a pass
    for (int i = 0; i < num_students; i++) {
        // We will assign a pass ID (e.g., student 0 gets pass ID 1, student 1 gets pass ID 2, etc.)
        student_passes[i] = i + 1; 

        // Print the welcome message
        printf("Welcome Student! You are number %d out of %d. Your Pass ID is %d\n", i + 1, num_students, student_passes[i]);
    }
    // Give the memory back to the Operating System
    // free(student_passes);
    student_passes = NULL; // Good habit: point it to NULL so we don't accidentally use it again
    return 0;
}