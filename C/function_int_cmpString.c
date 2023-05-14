#include <stdio.h>
#include <string.h>

int cmpString(char* s, char* t) {
    while (*s != '\0' && *t != '\0') {
        if (*s != *t) {
            return *s - *t;
        }
        s++;
        t++;
    }

    if (*s == '\0' && *t == '\0') {
        return 0;
    }
    if (*s == '\0') {
        return -1;
    }
    return 1;
}

int main() {
    char s[] = "Hello";
    char t[] = "Hello";
    int result = cmpString(s, t);
    printf("Result of comparison: %d\n", result);
    return 0;
}
