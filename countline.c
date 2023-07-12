#include<stdio.h>

void countline(FILE* file,int* count)
{
    if(file == NULL)
    {
        printf("file doesn't exists");
        return ;
    }
    char c;
    * count=0;
    for(c=fgetc(file);c!=EOF;c=fgetc(file))
    {
        if(c=='\n')
        {
            (*count)++;
        }
    }
    // printf("total no. of line: %d",count);
}

int main()
{
    FILE* file = fopen("source","r");
    int count=0;

    // if(file == NULL)
    // {
    //     printf("file doesn't exits");
    //     return 1;
    // }
    // char c;
    // int count=0;
    // for(c=fgetc(file);c!=EOF; c=fgetc(file)){
    //     if(c=='\n')
    //     {
    //         count++;
    //     }
    // }
    countline(file,&count);
    fclose(file);
    printf("total number of lines in files : %d\n",count);
    return 0;

}