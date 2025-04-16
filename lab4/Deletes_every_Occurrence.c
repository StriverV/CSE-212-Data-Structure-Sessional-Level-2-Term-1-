#include <stdio.h>
#include <string.h>

int main() {
    char text[1000], pattern[100];
    char New_Text[1000];
    int i, j, k, match;

    printf("Enter text: ");
    gets(text);
    printf("Enter pattern : ");
    gets(pattern);

    j = 0;
    for (i = 0; text[i] != '\0'; i++) {
        match = 1;

        for (k = 0; pattern[k] != '\0'; k++) {
            if (text[i + k] != pattern[k]) {
                match = 0;
                break;
            }
        }

        if (match == 1) {
            i += k - 1;
        } else {
            New_Text[j] = text[i];
            j++;
        }
    }

    New_Text[j] = '\0';

    printf("New_Text: %s\n", New_Text);

    return 0;
}
