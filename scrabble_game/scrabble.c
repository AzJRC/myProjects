#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int const POINTS[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
                    //a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p, q,r,s,t,u,v,w,x,y, z

int* compute_score(char word1[], char word2[]) {
    int length1 = strlen(word1);
    int length2 = strlen(word2);
    
    int* score = malloc(2 * sizeof(int));
    score[0] = 0;
    score[1] = 0;

    int i = 0;
    while (i < length1 || i < length2) {
        int test1 = i < length1 ? tolower(word1[i]) - 'a' : -1;
        int test2 = i < length2 ? tolower(word2[i]) - 'a' : -1;
        
        if (test1 >= 0 && test1 <= 25) {
            score[0] += POINTS[test1];
        }
        if (test2 >= 0 && test2 <= 25) {
            score[1] += POINTS[test2];
        }
        
        i++;
    }
        return score;
    };


int main(void) {
    char p1_word[30];
    char p2_word[30];

    printf("Player 1: ");
    scanf("%s", p1_word);
    printf("Player 2: ");
    scanf("%s", p2_word);

    int* score = compute_score(p1_word, p2_word);

    printf("\n\n");
    printf("Player 1 score: %d\n", score[0]);
    printf("Player 2 score: %d\n", score[1]);
    printf("\n\n");

    if (score[0] > score[1]) {
        printf("Player 1 wins!");
    } else if (score[0] < score[1]) {
        printf("Player 2 wins!");
    } else {
        printf("Tie!");
    }
    
    free(score);
    return 0;
};