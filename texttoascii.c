#include <stdio.h>

void convertToASCII(const char* filename,const char* outputFile) {
    FILE* file = fopen(filename, "r");
    FILE* output= fopen(outputFile, "w");
    // FILE* binary = fopen(binaryfile,"wb");
    if (file == NULL) {
        printf("Error: Failed to open the file\n");
        return;
    }

    char c;
    while ((c = fgetc(file)) != EOF) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            int asciivalue = (int)c;
            fprintf(output,"%c: %d\n", c, asciivalue);
        }
    }
    // int binary [32];
    // int index = 0;
    // int asciivalue = (int)c;
    // while (asciivalue>0)
    // {
    //     binary[index] = asciivalue % 2;
    //     asciivalue = asciivalue/2;
    //     index++;
    // }
    // for(int i=index-1;i>0;i--)
    // {
    //     fwrite(&binary[i],sizeof(int),1,binaryfile);
    // }

    fclose(file);
    fclose(output);
}

int main() {
    const char* inputfilename = "input.txt";
    const char* output = "ascii.txt";
    // const char* binary = "binary2.bin";
    convertToASCII(inputfilename,output);

    return 0;
}
