#include <stdio.h>
#include <string.h>

int main() {

    char email[100];
    char domain[100];
    int i, pos = -1;

    printf("Enter email: ");
    scanf("%s", email);

    for(i = 0; i < strlen(email); i++) {
        if(email[i] == '@') {
            pos = i;
        }
    }

    if(pos == -1) {
        printf("Invalid email");
    } else {
        int j = 0;
        for(i = pos + 1; email[i] != '\0'; i++) {
            domain[j] = email[i];
            j++;
        }
        domain[j] = '\0';

        printf("Domain: %s", domain);
    }

    return 0;
}
