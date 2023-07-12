#include <stdio.h>

void decimalToBinary(int number, FILE* binaryFile) {
    if (number == 0) {
        return;
    }

    int binary[32]; // Assuming 32-bit representation
    int index = 0;

    while (number > 0) {
        binary[index] = number % 2;
        number /= 2;
        index++;
    }

    for (int i = index - 1; i >= 0; i--) {
        fwrite(&binary[i], sizeof(int), 1, binaryFile);
    }
}

int main() {
    FILE* inputFile = fopen("input.txt", "r");
    FILE* binaryFile = fopen("binary.bin", "wb");

    if (inputFile == NULL || binaryFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    int decimalNumber;

    while (fscanf(inputFile, "%d", &decimalNumber) == 1) {
        decimalToBinary(decimalNumber, binaryFile);
    }

    fclose(inputFile);
    fclose(binaryFile);

    printf("Conversion completed successfully.\n");

    return 0;
}
