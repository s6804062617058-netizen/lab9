#include <stdio.h>
#include <string.h>

int main() {

    char str1[100], str2[100];
    int i, j;

    printf("Enter characters to remove:");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Text:");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    for(i = 0; str1[i] != '\0'; i++) {

        int count = 0;
        int len = strlen(str2);

        for(j = 0; j < len; j++) {

            if(str2[j] == str1[i]) {
                count++;

                for(int k = j; k < len; k++) {
                    str2[k] = str2[k+1];
                }

                j--;
                len--;
            }
        }

        if(count > 0)
            printf("Character '%c' removed %d time(s)\n", str1[i], count);
        else
            printf("Character '%c' not found\n", str1[i]);
    }

    printf("Text after remove: %s\n", str2);

    return 0;
}
