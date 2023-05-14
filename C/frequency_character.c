#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100
#define ALPHABET_COUNT 26

int main() {
  char string[MAX_LENGTH];
  int lowercase[ALPHABET_COUNT] = {0};
  int uppercase[ALPHABET_COUNT] = {0};
  int i, length;
  char c;

  printf("Enter a string: ");
  scanf("%[^\n]s", string);

  length = strlen(string);
  for (i = 0; i < length; i++) {
    c = string[i];
    if (c >= 'a' && c <= 'z') {
      lowercase[c - 'a']++;
    } else if (c >= 'A' && c <= 'Z') {
      uppercase[c - 'A']++;
    }
  }


  printf("Lowercase letters:\n");
  for (i = 0; i < ALPHABET_COUNT; i++) {
    printf("%c: %d\n", 'a' + i, lowercase[i]);
  }

  printf("Uppercase letters:\n");
  for (i = 0; i < ALPHABET_COUNT; i++) {
    printf("%c: %d\n", 'A' + i, uppercase[i]);
  }

  return 0;
}
