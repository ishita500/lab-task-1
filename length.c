#include <stdio.h>

int stringLength(char *str) {
    int len = 0;
    while (*str++) len++;
    return len;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    char *p = str;
    while (*p) {
        if (*p == '\n') *p = '\0';
        p++;
    }

    printf("Length of string: %d\n", stringLength(str));
    return 0;
}
