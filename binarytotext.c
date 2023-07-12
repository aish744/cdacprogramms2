#include <stdio.h>

void binaryToDecimal(FILE* binaryFile, FILE* outputFile) {
    int binary;
    while (fread(&binary, sizeof(int), 1, binaryFile) == 1) {
        int decimal = 0;
        int base = 1;
        while (binary > 0) {
            int digit = binary % 10;
            decimal += digit * base;
            binary /= 10;
            base *= 2;
        }
        fprintf(outputFile, "%d ", decimal);
    }
}

int main() {
    FILE* binaryFile = fopen("binary.bin", "rb");
    FILE* outputFile = fopen("out.txt", "w");

    if (binaryFile == NULL || outputFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    binaryToDecimal(binaryFile, outputFile);

    fclose(binaryFile);
    fclose(outputFile);

    printf("Conversion completed successfully.\n");

    return 0;
}
