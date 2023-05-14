#include <stdio.h>
#include <string.h>

int isPalindrome(char* s) {
    char* end = s + strlen(s) - 1;
    while (end > s) {
        if (*s != *end) {
            return 0;
        }
        s++;
        end--;
    }
    return 1;
}

int main() {
    char s[] = "racecar";
    int result = isPalindrome(s);
    if (result == 1) {
        printf("The string is a palindrome\n");
    } else {
        printf("The string is not a palindrome\n");
    }
    return 0;
}
