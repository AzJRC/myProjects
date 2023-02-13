#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void) {
    int initial, end;
    printf("Initial number: ");
    scanf("%d", &initial);
    printf("Last number: ");
    scanf("%d", &end);

    if (initial < 2) {
        initial = 2;
    }

    printf("Your values are %d and %d\n", initial, end);

    //array of primes
    bool numb[end];
    for (int i = 0; i < end; i++) {
        numb[i] = true;
    }

    int limit = (int) sqrt(end);
    for (int i = 2; i <= limit; i++) {
        if (numb[i]) {
            for (int j = i * i; j < end; j += i) {
                numb[j] = false;
            }
        }
    }

    for (int i = initial; i < end; i++) {
        if (numb[i]) {
            printf("%d ", i);
        }
    }

    return 0;

}