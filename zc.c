#include <stdio.h>
int main() {
    char str[1000], ch;
    int count = 0;

    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Input a character to find frequency: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++count;
    }

    printf("Frequency of %c = %d", ch, count);
    return 0;
}
