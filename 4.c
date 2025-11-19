#include <stdio.h>
#include <string.h>

int main() {

    char msg[200], enc[200], dec[200];
    int i;

    printf("Enter message: ");
    fgets(msg, 200, stdin);

    for(i = 0; msg[i] != '\0'; i++) {
        char c = msg[i];

        if(c >= 'a' && c <= 'z') {
            enc[i] = ((c - 'a' + 3) % 26) + 'a';
        }
        else if(c >= 'A' && c <= 'Z') {
            enc[i] = ((c - 'A' + 3) % 26) + 'A';
        }
        else {
            enc[i] = c;
        }
    }
    enc[i] = '\0';

    for(i = 0; enc[i] != '\0'; i++) {
        char c = enc[i];

        if(c >= 'a' && c <= 'z') {
            dec[i] = ((c - 'a' - 3 + 26) % 26) + 'a';
        }
        else if(c >= 'A' && c <= 'Z') {
            dec[i] = ((c - 'A' - 3 + 26) % 26) + 'A';
        }
        else {
            dec[i] = c;
        }
    }
    dec[i] = '\0';

    printf("Original: %s", msg);
    printf("Encrypted: %s", enc);
    printf("Decrypted: %s", dec);

    return 0;
}
