#include <stdio.h>
#include <string.h>
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
int main() {
    char binary[100];
    printf("Ashutosh thapa\n");
    printf("Enter a binary number: ");
    scanf("%s", binary);
    onesComplement(binary);
    printf("One's complement: %s\n", binary);

    return 0;
}