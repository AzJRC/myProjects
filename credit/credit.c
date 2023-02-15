#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

//first digit function
int determineFirstDigit(long long number, int length) {
    long long fd = number;
    while (fd >= 100) {
        fd /= 10;
    } 
    return fd;
}

int validation(long long number, int length) {
    char str[20]; 
    int sum = 0;

    //convert the number to a string array
    sprintf(str, "%lld", number);

    //second-to-last digits are:
    for (int i = length; i >= 0; i = i - 2) {
        int secToLast = (str[i] - '0') * 2;
        int otherNum = (str[i-1] - '0') * 1;
        if (otherNum > 0) {
            sum += otherNum;
        }
        if (secToLast > 0) {
            //here will add the digits of every double second-to-last digit
            int valToAdd = secToLast;
            while (valToAdd > 0) {
                sum += valToAdd % 10;
                valToAdd /= 10;
            }
        }
    }

    bool validation = (sum % 10 == 0) ? true : false;

    switch (length){
    case 13:
    case 15:
    case 16:
        break;
    default:
        validation = false;
        break;
    }

    return validation;
}


//main
int main(void) {
    long long cred_num;
    //ask the user for a number credit card
    printf("Number: ");
    scanf("%lld", &cred_num);

    //determine the number of digits it has
    long long num = cred_num;
    int numOfDig = 0;
    while (num > 0) {
        num /= 10;
        numOfDig++;
    }
    
    int firstDig = determineFirstDigit(cred_num, numOfDig);
    int isValid = validation(cred_num, numOfDig);

    switch (firstDig)
    {
    case 34:
    case 37:
        //American Express
        if (isValid) {printf("AMEX\n");}
        break;

    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
        //Mastercard
        if (isValid) {printf("MASTERCARD\n");}
        break;
        
    default:
        //Visa
        if (firstDig >= 40 && firstDig <= 49 && isValid) {
            printf("VISA\n");
        } else {
            printf("INVALID\n");
        } 
    }
    return 0;
}