#include <stdio.h>
#include <string.h>

int main() {

    char text[200];
    int i;
    int v = 0, c = 0, d = 0, s = 0;

    printf("Enter text: ");
    fgets(text, 200, stdin);

    for(i = 0; text[i] != '\0'; i++) {

        if(text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u' ||
           text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U') {
            v++;
        }
        else if((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z')) {
            c++;
        }
        else if(text[i] >= '0' && text[i] <= '9') {
            d++;
        }
        else if(text[i] == ' ') {
            s++;
        }
    }

    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);
    printf("Digits: %d\n", d);
    printf("Spaces: %d\n", s);
    printf("Total characters: %d\n", (int)strlen(text));

    return 0;
}
