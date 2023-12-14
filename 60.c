#include<stdio.h>
#include<string.h>

void onesComplement(char binary[]) {
    int length = strlen(binary);

    for (int i = 0; i < length; i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        }
    }
}
void addOne(char binary[]) {
    int length = strlen(binary);
    int carry = 1;
    for (int i = length - 1; i >= 0; i--) {
        if (binary[i] == '0' && carry == 1) {
            binary[i] = '1';
            carry = 0;
        } else if (binary[i] == '1' && carry == 1) {
            binary[i] = '0';
        }
    }
}
int main() {
    char binary[100];
    printf("Ashutosh thapa\n");
    printf("Enter a binary number: ");
    scanf("%s", binary);
    onesComplement(binary);
    addOne(binary);
    printf("Two's complement: %s\n", binary);
    return 0;
}