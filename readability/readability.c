#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int count_letters(char str[]);
int count_words(char str[]);
int count_sentences(char str[]);

int main() {
    char *str;
    int count = 0;

    printf("Text: ");
    str = (char *) malloc(1);

    char c = getchar();
    while (c != '\n') {
        str[count] = c;
        count++;
        str = (char *) realloc(str, count + 1);
        c = getchar();
    }
    str[count] = '\0';

    int letters = count_letters(str);
    int words = count_words(str);
    int sentences = count_sentences(str);

    //Coleman-Liau index

    float let_words = 100 * (float) letters / (float) words;
    float sent_words = 100 * (float) sentences / (float) words;


    float calc_index = 0.0588 * let_words - 0.296 * sent_words - 15.8;
    
    if (calc_index < 1) {
        printf("Grade 1");
    } else if (calc_index > 16) {
        printf("Grade +16");
    } else {
        printf("Grade %d", (int) round(calc_index));
    }

    free(str);
    return 0;
}

int count_letters(char str[]) {
    int i = 0;
    int count = 0;
    while (str[i] != '\0') {
        if (isalpha(str[i++])) {
            count++;
        }
    }
    printf("The number of letters in the string is %d\n", count);
    return count;
}

int count_words(char str[]) {
    int i = 0;
    int count = 0;
    while (str[i] != '\0') {
        if (isspace(str[i]) && isalnum(str[i-1]) || isspace(str[i]) && ispunct(str[i-1])) {
            count++;
        }
        i++;
    }
    count++;
    printf("The number of words in the string is %d\n", count);
    return count;
}

int count_sentences(char str[]) {
    int i = 0;
    int count = 0;
    while (str[i] != '\0') {
        if (str[i] == '.' || str[i] == '?' || str[i] == '!') {
            count++;
        }
        i++;
    }
    printf("The number of sentences in the string is %d\n", count);
    return count;
}
