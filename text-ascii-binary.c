#include <stdio.h>

void convertToASCII(const char* filename, const char* outputFilename, const char* binaryFilename) {
    FILE* file = fopen(filename, "r");
    FILE* output = fopen(outputFilename, "w");
    FILE* binary = fopen(binaryFilename, "wb");
    if (file == NULL) {
        printf("Error: Failed to open the file\n");
        return;
    }

    char c;
    while ((c = fgetc(file)) != EOF) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            int asciiValue = (int)c;
            fprintf(output, "%c: %d\n", c, asciiValue);

            int binaryValue[32];
            int index = 0;
            int tempValue = asciiValue;
            while (tempValue > 0) {
                binaryValue[index] = tempValue % 2;
                tempValue = tempValue / 2;
                index++;
            }

            for (int i = index - 1; i >= 0; i--) {
                fwrite(&binaryValue[i], sizeof(int), 1, binary);
            }
        }
    }

    fclose(file);
    fclose(output);
    fclose(binary);
}

int main() {
    const char* inputFilename = "input.txt";
    const char* outputFilename = "ascii2.txt";
    const char* binaryFilename = "binary4.bin";
    convertToASCII(inputFilename, outputFilename, binaryFilename);

    return 0;
}
