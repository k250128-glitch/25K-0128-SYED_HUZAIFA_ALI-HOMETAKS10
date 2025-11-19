#include <stdio.h>
#include <string.h>

#define MAX_CLASSES 5
#define TOTAL_STUDENTS 4
#define LEN 30

int main() {
    char names[TOTAL_STUDENTS][LEN] = {"Alice", "Bob", "Charlie", "Diana"};
    char stuff[TOTAL_STUDENTS][MAX_CLASSES][LEN] = {
        {"Math", "Physics", "Chemistry"},
        {"Biology", "Math"},
        {"Physics", "Chemistry", "Biology", "Art"},
        {"Math"}
    };
    int howMany[TOTAL_STUDENTS] = {3, 2, 4, 1};

    printf("Here are students and what they signed up for:\n");
    for(int i = 0; i < TOTAL_STUDENTS; i++) {
        printf("%s: ", names[i]);
        for(int j = 0; j < howMany[i]; j++) {
            printf("%s ", stuff[i][j]);
        }
        printf("\n");
    }

    char findClass[LEN];
    printf("\nWhich class do you wanna search for? ");
    scanf("%s", findClass);

    printf("Students taking %s:\n", findClass);
    for(int i = 0; i < TOTAL_STUDENTS; i++) {
        for(int j = 0; j < howMany[i]; j++) {
            if(strcmp(stuff[i][j], findClass) == 0) {
                printf("%s\n", names[i]);
                break;
            }
        }
    }

    printf("\nStudents taking too many classes:\n");
    for(int i = 0; i < TOTAL_STUDENTS; i++) {
        if(howMany[i] > 3) {
            printf("%s\n", names[i]);
        }
    }

    return 0;
}
