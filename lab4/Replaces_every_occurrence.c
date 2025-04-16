#include <stdio.h>
#include <string.h>

int main() {
    char text[1000], pattern[100], replacement[100];
    char New_Text[1000];
    int i, j = 0, k;

    printf("Enter text: ");
    gets(text);
    printf("Enter pattern: ");
    gets(pattern);
    printf("replacement pattern: ");
    gets(replacement);

    for (i = 0; text[i] != '\0'; i++) {
        int match = 1;


        for (k = 0; pattern[k] != '\0'; k++) {
            if (text[i + k] != pattern[k]) {
                match = 0;
                break;
            }
        }

        if (match == 1) {

            for (k = 0; replacement[k] != '\0'; k++) {
                New_Text[j++] = replacement[k];
            }
            i += k - 1;
        } else {
            New_Text[j++] = text[i];
        }
    }

    New_Text[j] = '\0';

    printf("New Text: %s\n", New_Text);

    return 0;
}
