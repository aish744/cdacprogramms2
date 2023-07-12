#include<stdio.h>
void copyFile(FILE* sourceFile,FILE* destinationFile)
{
    // FILE* source = fopen("source","r");
    // FILE* destination = fopen("destination.txt","w");
    
   char c;
   while((c=getc(sourceFile))!= EOF)
   {
    fputc(c,destinationFile);
   }
   fclose(sourceFile);
   fclose(destinationFile);

}
int main()
{
    FILE* source = fopen("source","r");
    FILE* destination = fopen("destination.txt","w");

    
    // char c;

    //     while((c=fgetc(source)) !=EOF){
    //         fputc(c,destination);

    // }
    
    // fclose(source);
    // fclose(destination);
    copyFile(source,destination);
    printf("File copied successfully.\n");

    return 0;
}