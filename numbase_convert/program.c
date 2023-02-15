#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

#define MAX 10000

//binary to decimal
long twoToTen() {
    unsigned long long n; //the number that will be converted
    bool valid = true;
    char numToChar[MAX];
    
    while (valid) {
        printf("Enter a number in base 2: ");
        scanf("%ld", &n);

        //proceeds to check if the number is actually a binary number
        sprintf(numToChar, "%ld", n);

        for (int i = 0; i < strlen(numToChar); i++) {
            //check if the array has a number that is not an 1 or 0
            if (numToChar[i] != '1' && numToChar[i] != '0') {
                valid = true;
                printf("%c - Enter a valid number!\n", numToChar[i]);
                break;
            } else {
                valid = false;
            }
        } 
    }
    //algorithm binary to decimal
    unsigned long long converted = 0;
    for (int i = 0; i < strlen(numToChar); i++) {
        if (numToChar[i] == '1') {
            converted += (unsigned long long) pow(2, strlen(numToChar) - i - 1);
        }
    }
    printf("Your number is: %ld\n", converted);
    return converted;
}

//function that converts base ten to base two
int tenToTwo() {
    unsigned long long n; //the number that will be converted
    bool valid = true;
    
    printf("Enter a number in base 10: ");
    scanf("%ld", &n);
    
    unsigned long long copy_n = n;

    return 0;
}

int main(void) {
    //ask the user if convert from decimal to binary or binary to decimal
    int convertBase = 0;
    while (convertBase != 2 && convertBase != 10)
    {
        printf("What base is your number? [2 or 10] ");
        scanf("%d", &convertBase);
    }

    long result = convertBase == 2 ? twoToTen() : tenToTwo();
    return 0;
}
