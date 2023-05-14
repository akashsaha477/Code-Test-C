#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello";
    char str2[100] = " World";
    int str1_len = strlen(str1);
    int str2_len = strlen(str2);

    for (int i = 0; i < str2_len; i++) {
        str1[str1_len + i] = str2[i];
    }
    str1[str1_len + str2_len] = '\0';

    printf("Concatenated string: %s\n", str1);

    return 0;
}
