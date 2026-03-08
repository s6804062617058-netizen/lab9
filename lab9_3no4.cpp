#include <stdio.h>
#define MAX 50

int countVowel(char []);

int main() {

    char text[MAX];
    int cVowel;

    printf("Enter text : ");
    scanf("%s", text);

    cVowel = countVowel(text);

    printf("Text : [%s] has %d vowels\n", text, cVowel);

    return 0;
}

int countVowel(char t[]) {

    int i = 0;
    int count = 0;

    int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;

    while(i < MAX && t[i] != '\0') {

        if(t[i]=='A' || t[i]=='a') {
            count++;
            countA++;
        }
        else if(t[i]=='E' || t[i]=='e') {
            count++;
            countE++;
        }
        else if(t[i]=='I' || t[i]=='i') {
            count++;
            countI++;
        }
        else if(t[i]=='O' || t[i]=='o') {
            count++;
            countO++;
        }
        else if(t[i]=='U' || t[i]=='u') {
            count++;
            countU++;
        }

        i++;
    }

    printf("A = %d\n", countA);
    printf("E = %d\n", countE);
    printf("I = %d\n", countI);
    printf("O = %d\n", countO);
    printf("U = %d\n", countU);

    return count;
}
