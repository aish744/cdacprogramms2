#include <stdio.h>

void convertFromASCII(const char* filename,const char* outputFile) {
    FILE* file = fopen(filename, "r");
    FILE* output= fopen(outputFile, "w");
    if (file == NULL) {
        printf("Error: Failed to open the file\n");
        return;
    }

    int asciiValue;
    while (fscanf(file,"%d",&asciiValue) == 1) {
        if (( asciiValue >= 65 && asciiValue <= 90)  || (asciiValue>=97 && asciiValue<=122) ) {
            char alphabet = (char)asciiValue;
            fprintf(output,"%c\n",alphabet);
        }
        else
        {
            fprintf(output,"doesn't exist\n");
        }
    }

    

    fclose(file);
    fclose(output);
}

int main() {
    const char* file= "input.txt";
    const char* output = "ascii.txt";
    convertFromASCII(file,output);

    return 0;
}
