#include <stdio.h>
#include <string.h>

int main() {
    char students[5][20];
    int marks[5] = {85, 92, 78, 88, 95};

    // Storing names using string.h
    strcpy(students[0], "Alice");
    strcpy(students[1], "Bob");
    strcpy(students[2], "Charlie");
    strcpy(students[3], "David");
    strcpy(students[4], "Emma");

    int highestMarks = marks[0];
    int topIndex = 0;
    int sum = 0;

    printf("STUDENT MARKS TABLE\n");
    printf("--------------------------------\n");
    printf("%-10s | %-5s\n", "Name", "Marks");
    printf("--------------------------------\n");

    for (int i = 0; i < 5; i++) {
        printf("%-10s | %-5d\n", students[i], marks[i]);

        if (marks[i] > highestMarks) {
            highestMarks = marks[i];
            topIndex = i;
        }

        sum += marks[i];
    }

    float average = sum / 5.0;

    printf("--------------------------------\n");
    printf("Top Student : %s (%d)\n", students[topIndex], highestMarks);
    printf("Class Average : %.2f\n", average);
    printf("--------------------------------\n");

    return 0;
}
