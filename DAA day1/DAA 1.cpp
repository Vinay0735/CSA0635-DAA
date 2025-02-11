#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isPalindrome(const char *str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return false;
        }
    }
    return true;
}
const char* findFirstPalindrome(const char *words[], int size) {
    for (int i = 0; i < size; i++) {
        if (isPalindrome(words[i])) {
            return words[i];
        }
    }
    return ""; 
}

int main() {
    const char *words[] = {"notapalindrome", "racecar"};
    int size = sizeof(words) / sizeof(words[0]);

    const char *result = findFirstPalindrome(words, size);

    if (strlen(result) > 0) {
        printf("The first palindromic string is: %s\n", result);
    } else {
        printf("No palindromic string found.\n");
    }

    return 0;
}

