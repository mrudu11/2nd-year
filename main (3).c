#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char phoneNumber[20];
    int i, isValid = 1;
    printf("Enter a phone number: ");
    scanf("%s", phoneNumber);

    if (strlen(phoneNumber) != 10) {
        isValid = 0; 
    }

    
    for (i = 0; i < strlen(phoneNumber); i++) {
        if (!isdigit(phoneNumber[i])) {
            isValid = 0;  
        }
    }


    if (isValid) {
        printf("The phone number is valid.\n");
    } else {
        printf("The phone number is invalid.\n");
    }

    return 0;
}
