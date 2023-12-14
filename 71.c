#include <stdio.h>
#include <string.h>
int main() {
    printf("Ashutosh thapa\n");
    char hexadecimal[100];
    printf("Enter a hexadecimal number: ");
    scanf("%s", hexadecimal);
    int hexLength = strlen(hexadecimal);
    char binary[4 * hexLength + 1];
    char octal[3 * hexLength + 1];
    int binaryPosition = 0;
    for (int i = 0; i < hexLength; i++) {
        char hexDigit = hexadecimal[i];
        char* binaryDigits = NULL;
        switch (hexDigit) {
            case '0': binaryDigits = "000"; break;
            case '1': binaryDigits = "001"; break;
            case '2': binaryDigits = "010"; break;
            case '3': binaryDigits = "011"; break;
            case '4': binaryDigits = "100"; break;
            case '5': binaryDigits = "101"; break;
            case '6': binaryDigits = "110"; break;
            case '7': binaryDigits = "111"; break;
            case '8': binaryDigits = "1000"; break;
            case '9': binaryDigits = "1001"; break;
            case 'A':
            case 'a': binaryDigits = "1010"; break;
            case 'B':
            case 'b': binaryDigits = "1011"; break;
            case 'C':
            case 'c': binaryDigits = "1100"; break;
            case 'D':
            case 'd': binaryDigits = "1101"; break;
            case 'E':
            case 'e': binaryDigits = "1110"; break;
            case 'F':
            case 'f': binaryDigits = "1111"; break;
            default:
                printf("Invalid hexadecimal digit: %c\n", hexDigit);
                return 1;
        }
        for (int j = 0; j < 3; j++) {
            binary[binaryPosition++] = binaryDigits[j];
        }
    }
    binary[binaryPosition] = '\0';
    int padding = 3 - (binaryPosition % 3);
    if (padding != 3) {
        for (int i = 0; i < padding; i++) {
            binary[binaryPosition + i] = '0';
        }
        binaryPosition += padding;
    }
    binary[binaryPosition] = '\0';
    int binaryLength = strlen(binary);
    int octalPosition = 0;
    for (int i = 0; i < binaryLength; i += 3) {
        int octalValue = 0;
        for (int j = 0; j < 3; j++) {
            octalValue = (octalValue << 1) | (binary[i + j] - '0');
        }
        octal[octalPosition++] = octalValue + '0';
    }
    octal[octalPosition] = '\0';
    printf("Octal equivalent: %s\n", octal);
    return 0;
}