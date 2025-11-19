#include <stdio.h>
#include <string.h>

int main() {

    char pass[100];
    char sp[5][2] = {"!", "@", "#", "$", "%"};
    int i, j;
    int len, up = 0, dig = 0, spec = 0;

    printf("Enter password: ");
    scanf("%s", pass);

    len = strlen(pass);

    for(i = 0; i < len; i++) {

        if(pass[i] >= 'A' && pass[i] <= 'Z') {
            up = 1;
        }

        if(pass[i] >= '0' && pass[i] <= '9') {
            dig = 1;
        }

        char x[2];
        x[0] = pass[i];
        x[1] = '\0';

        for(j = 0; j < 5; j++) {
            if(strcmp(x, sp[j]) == 0) {
                spec = 1;
            }
        }
    }

    if(len >= 8 && up == 1 && dig == 1 && spec == 1) {
        printf("Password is strong");
    } else {
        printf("Password is weak");
    }

    return 0;
}
